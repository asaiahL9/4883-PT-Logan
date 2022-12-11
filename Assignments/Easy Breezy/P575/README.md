# [UVa 575](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P575/575.pdf) - Skew Binary

When a number is expressed in decimal, the k-th digit represents a multiple of 10k
. (Digits are numbered
from right to left, where the least significant digit is number 0.) For example,
8130710 = 8 × 104 + 1 × 103 + 3 × 102 + 0 × 101 + 7 × 100 = 80000 + 1000 + 300 + 0 + 7 = 81307.
When a number is expressed in binary, the k-th digit represents a multiple of 2
k
. For example,
100112 = 1 × 2
4 + 0 × 2
3 + 0 × 2
2 + 1 × 2
1 + 1 × 2
0 = 16 + 0 + 0 + 2 + 1 = 19.
In skew binary, the k-th digit represents a multiple of 2
k+1 −1. The only possible digits are 0 and
1, except that the least-significant nonzero digit can be a 2. For example,
10120skew = 1×(25 −1)+ 0×(24 −1)+ 1×(23 −1)+ 2×(22 −1)+ 0×(21 −1) = 31+ 0+ 7+ 6 + 0 = 44.
The first 10 numbers in skew binary are 0, 1, 2, 10, 11, 12, 20, 100, 101, and 102. (Skew binary is
useful in some applications because it is possible to add 1 with at most one carry. However, this has
nothing to do with the current problem.)

**For each number, output the decimal equivalent. The decimal value of n will be at most 2
31 − 1 = 2147483647. **

```
Sample Input:
10120
200000000000000000000000000000
10
1000000000000000000000000000000
11
100
11111000001110000101101102000
0

Sample Output:
44
2147483646
3
2147483647
4
7
1041110737
```

* uVa Problem: [Skew Binary](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P575/575.pdf)

|   #   | File | Description |
| :---: | ----------- | ----------|
|  1 | [main.cpp](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P575/main.cpp)      |Solution|   
|  2 | [in](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P575/in.txt)    | input file 1  | 
|  3 | [in2](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P575/in2.txt)    | input file 2  | 
|  4 | [Skew Binary](https://github.com/asaiahL9/4883-PT-Logan/blob/main/Assignments/P575/575.pdf)|UVa Problem|
