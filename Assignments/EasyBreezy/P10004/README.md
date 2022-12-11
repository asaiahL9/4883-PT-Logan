# [UVa 10004](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P10004/10004.pdf) - Bicoloring

In 1976 the “Four Color Map Theorem” was proven with the assistance of a computer. This theorem
states that every map can be colored using only four colors, in such a way that no region is colored
using the same color as a neighbor region.
Here you are asked to solve a simpler similar problem. You have to decide whether a given arbitrary
connected graph can be bicolored. That is, if one can assign colors (from a palette of two) to the nodes
in such a way that no two adjacent nodes have the same color. To simplify the problem you can assume:
• no node will have an edge to itself.
• the graph is nondirected. That is, if a node a is said to be connected to a node b, then you must
assume that b is connected to a.
• the graph will be strongly connected. That is, there will be at least one path from any node to
any other node.


**You have to decide whether the input graph can be bicolored or not, and print it as shown below. **

```
Sample Input:
3
3
0 1
1 2
2 0
3
2
0 1
1 2
9
8
0 1
0 2
0 3
0 4
0 5
0 6
0 7
0 8
0

Sample Output:
NOT BICOLORABLE.
BICOLORABLE.
BICOLORABLE.
```

* uVa Problem: [Bicoloring](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P10004/10004.pdf)

|   #   | File | Description |
| :---: | ----------- | ----------|
|  1 | [main.cpp](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P10004/main.cpp#L102)      |Solution|   
|  2 | [in](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P10004/in.txt#L21)    | input file 1  | 
|  3 | [in2](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P10004/in2.txt#L3914)    | input file 2  | 
|  4 | [Bicoloring](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P10004/10004.pdf)|UVa Problem|
