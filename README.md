Project 02: lsort
===================

This is a simple implementation of the Unix [sort] utility that works on
[singly-linked lists].

[sort]: http://man7.org/linux/man-pages/man1/sort.1.html
[singly-linked lists]: https://en.wikipedia.org/wiki/Linked_list#Singly_linked_lists

1. STL - best, average, and worst case time complexity: O(n log(n)). Space complexity: O(log n). STL does quick sort until there is log(n) recursion and then it does heap sort.
   QSORT - best and average time complexity: O(n log(n)) worst case time is O(n^2). Space complexity: O(log n). This is quick sort. It uses divide and conquer to sort a list recursively. It picks a pivot and places the numbers that are less than the pivot on one side until the pivot is in the correct place in the array. It does this until the entire list is sorted.
   MERGE - best, average, and worst case time complexity: O(n log(n)). Space complexity - O(n). Merge sort uses divide and conquer to break up the list into smaller lists until they can be easily sorted in lists of 1 or 2. Then the lists are merged together by looking at the first element in the 2 sub lists and placing the smaller one in the new list and so on. 
   QUICK - best and average time complexity: O(n log(n)) worst case time is O(n^2). Space complexity: O(log n). This is quick sort for a linked list. It picks a pivot and works just like normal quick sort. We always included the pivot in the right sub list. It is the same as quick sort except instead of using swaps we had to use push_front like methods and insert methods to move nodes in the list.

2. 
| Mode    | Size      | Elapsed Time  | Memory    |
|---------|-----------|---------------|-----------|
| STL     | 10        | 0.003222      | 0.687500  |
| ...     | 100       | 0.002140      | 0.703125  |
| ...     | 1000      | 0.005732      | 0.753906  |
| ...     | 10000     | 0.031979      | 1.144531  |
| ...     | 100000    | 0.387512      | 5.359375  |
| ...     | 1000000   | 5.187944      | 47.210938 |
| ...     | 10000000  | 67.517334     | 465.72265 |
| QSORT   | 10        | 0.002046      | 0.683594  |
| ...     | 100       | 0.002101      | 0.687500  |
| ...     | 1000      | 0.005922      | 0.746094  |
| ...     | 10000     | 0.037335      | 1.160156  |
| ...     | 100000    | 0.377450      | 5.363281  |
| ...     | 1000000   | 5.051734      | 47.19921  |
| ...     | 10000000  | 66.540016     | 465.72265 |
| MERGE   | 10        | 0.001796      | 0.699219  |
| ...     | 100       | 0.002083      | 0.703125  |
| ...     | 1000      | 0.005902      | 0.746094  |
| ...     | 10000     | 0.035454      | 1.171875  |
| ...     | 100000    | 0.389035      | 5.359375  |
| ...     | 1000000   | 5.068874      | 47.214844 |
| ...     | 10000000  | 67.517342     | 465.71875 |
| QUICK   | 10        | 0.001966      | 0.699219  |
| ...     | 100       | 0.002001      | 0.703125  |
| ...     | 1000      | 0.005892      | 0.726562  |
| ...     | 10000     | 0.034355      | 1.175781  |
| ...     | 100000    | 0.377073      | 5.359375  |
| ...     | 1000000   | 5.053572      | 47.218750 |
| ...     | 10000000  | 66.735275     | 465.72265 |

3. All of the algorithms have O(n log(n)) time complexity for average cases and that is seen in the relatively close times for all the sample sizes. In the small test cases the STL is relatively slow compared to Qsort, Merge, and Quick while Merge is the fastest. At the largest test cases the Qsort is the fastest while Quick is the slowest. This really shows that the lines for each algorithm on a graph of size vs. time are switching off being the best algorithm. This reveals that even when two algorithms have the same average case time complexity one still can be faster and this can make a difference in problems with large data sets. We think the best sorting algorithm is the STL sort because it is fast and avoid huge stack calls because it moves to heap sort after doing log(n) recursive calls. We dont like merge sort because we like being able to do sorts in place easily. This is our main problem and tradeoff with merge sort. Although we do like our own implementations because we can attempt to optimize for a specific case, however we think STL is a really good general implementation. 

4. Contributions: 
We partner coded all of the algorithms and answered the README.md questions together.
John Joyce -- Wrote the start of the first two sorting algorithms. 
Robert Simari -- Wrote test scripts for README.md

