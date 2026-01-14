import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class NQueens {

    /**
     * Main function to initiate the N-Queens solver.
     */
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> allSolutions = new ArrayList<>();
        // queens[row] = col -> stores the column of the queen in a given row
        int[] queens = new int[n];
        
        // Start the recursive backtracking from the first row (row 0)
        solve(0, queens, allSolutions);
        return allSolutions;
    }

    /**
     * The recursive backtracking function.
     */
    private void solve(int row, int[] queens, List<List<String>> allSolutions) {
        int n = queens.length;

        // Base Case: If we have successfully placed a queen in every row
        if (row == n) {
            allSolutions.add(constructSolution(queens));
            return;
        }

        // Try placing a queen in each column of the current row
        for (int col = 0; col < n; col++) {
            if (isSafe(row, col, queens)) {
                // 1. Choose: Place the queen
                queens[row] = col;

                // 2. Explore: Recurse to the next row
                solve(row + 1, queens, allSolutions);
                
                // 3. Un-choose (Backtrack): No explicit action needed.
                // The next iteration of the loop will simply overwrite queens[row].
            }
        }
    }

    /**
     * Checks if placing a queen at (row, col) is safe by checking against
     * all previously placed queens (in rows 0 to row-1).
     */
    private boolean isSafe(int row, int col, int[] queens) {
        for (int i = 0; i < row; i++) {
            int prevQueenCol = queens[i];

            // Check if same column
            if (prevQueenCol == col) {
                return false;
            }

            // Check if on the same diagonal
            // abs(row1 - row2) == abs(col1 - col2)
            if (Math.abs(row - i) == Math.abs(col - prevQueenCol)) {
                return false;
            }
        }
        return true;
    }
 
    /**
     * Helper function to convert the queens array into the required List<String> format.
     */
    private List<String> constructSolution(int[] queens) {
        List<String> solution = new ArrayList<>();
        int n = queens.length;
        for (int row = 0; row < n; row++) {
            char[] line = new char[n];
            Arrays.fill(line, '.');
            line[queens[row]] = 'Q';
            solution.add(new String(line));
        }
        return solution;
    }
    
    // Main method to test the solution
    public static void main(String[] args) {
        int n = 4;
        NQueens nq = new NQueens();
        List<List<String>> solutions = nq.solveNQueens(n);

        System.out.println("Found " + solutions.size() + " solutions for a " + n + "x" + n + " board:");
        System.out.println("--------------------");

        for (int i = 0; i < solutions.size(); i++) {
            System.out.println("Solution " + (i + 1) + ":");
            List<String> solution = solutions.get(i);
            for (String row : solution) {
                System.out.println(row);
            }
            System.out.println();
        }
    }
}