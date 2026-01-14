import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class NaturalSortTest {
    public static void main(String[] args) {
        int failed = 0;

        if (!testNaturalSortBasic()) { System.out.println("testNaturalSortBasic: FAIL"); failed++; } else { System.out.println("testNaturalSortBasic: OK"); }
        if (!testNaturalSortNoNumbers()) { System.out.println("testNaturalSortNoNumbers: FAIL"); failed++; } else { System.out.println("testNaturalSortNoNumbers: OK"); }
        if (!testNaturalSortStableFallback()) { System.out.println("testNaturalSortStableFallback: FAIL"); failed++; } else { System.out.println("testNaturalSortStableFallback: OK"); }

        System.out.println(failed == 0 ? "ALL TESTS PASSED" : failed + " TEST(S) FAILED");
        if (failed > 0) System.exit(1);
    }

    // Basic behaviour using examples from the original file
    static boolean testNaturalSortBasic() {
        List<String> input = new ArrayList<>(Arrays.asList("file1.txt", "file10.txt", "file2.txt", "file20.txt", "file3.txt"));
        List<String> sorted = NaturalSort.naturalSort(input);
        List<String> expected = Arrays.asList("file1.txt", "file2.txt", "file3.txt", "file10.txt", "file20.txt");
        return sorted.equals(expected);
    }

    // When there are no numeric parts the original order should be preserved by the comparator fallback
    static boolean testNaturalSortNoNumbers() {
        List<String> input = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
        List<String> sorted = NaturalSort.naturalSort(input);
        List<String> expected = Arrays.asList("apple", "banana", "cherry");
        return sorted.equals(expected);
    }

    // Check that when numeric parts are equal the natural order fallback is used
    static boolean testNaturalSortStableFallback() {
        List<String> input = new ArrayList<>(Arrays.asList("a2", "a02", "a2b"));
        List<String> sorted = NaturalSort.naturalSort(input);
        // Expect lexicographic order as a fallback: "a02" < "a2" < "a2b"
        List<String> expected = Arrays.asList("a02", "a2", "a2b");
        return sorted.equals(expected);
    }
}
