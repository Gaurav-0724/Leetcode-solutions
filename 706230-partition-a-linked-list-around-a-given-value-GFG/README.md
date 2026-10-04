# [Partition a Linked List around a given value](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1)
## Medium

Given the head of a linked list and an integer x, rearrange the list such that:

All nodes with values less than x appear first,
Followed by nodes with values equal to x,
Followed by nodes with values greater than x.

The relative order of nodes within each partition must remain unchanged, and the rearrangement should be performed in-place.

&nbsp;
Examples:
Input: head: 1-&gt;4-&gt;2-&gt;10, x = 3 Output: 1-&gt;2-&gt;4-&gt;10Explanation: Nodes with value less than 3 come first, then equal to 3 and then greater than 3.
Input: head: 1-&gt;4-&gt;3-&gt;2-&gt;5-&gt;2-&gt;3, x = 3 Output: 1-&gt;2-&gt;2-&gt;3-&gt;3-&gt;4-&gt;5 Explanation: Nodes with a value less than 3 come first, then equal to 3 and then greater than 3.
Constraints:
1 ≤ size of linked list ≤ 105
1 ≤ data of node ≤ 105
1 ≤ x ≤ 105