# [Egg Dropping Puzzle](https://www.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1)
## Medium
Given n identical eggs and you have access to a k-floored building from&nbsp;1 to k.
There exists a floor f where 0 &lt;= f &lt;= k such that any egg dropped from a floor higher than f&nbsp;will break, and any egg dropped from or below floor f&nbsp;will not break. There are few rules given below.&nbsp;

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the egg breaks on a certain floor, it will break on any floor above.

Return the minimum number of moves&nbsp;you need to determine the value of&nbsp;f with certainty.
Examples:
Input: n = 2, k = 36Output: 8Explanation: In all the situations, 8 minimum moves are required to find the maximum floor. Following is the strategy to do so:Drop from floor 8 → If breaks, check 1-7 sequentially.Drop from floor 15 → If breaks, check 9-14.Drop from floor 21  → If breaks, check 16-20.Drop from floor 26 → If breaks, check 22-25.Drop from floor 30 → If breaks, check 27-29.Drop from floor 33 → If breaks, check 31-32.Drop from floor 35 → If breaks, check 34.Drop from floor 36 → Final check.
Input: n = 1, k = 36Output: 36Explanation: Drop the egg from the first-floor window; if it survives, drop it from the second-floor window. Continue upward until it breaks. In the worst case, this method may require 36 droppings.