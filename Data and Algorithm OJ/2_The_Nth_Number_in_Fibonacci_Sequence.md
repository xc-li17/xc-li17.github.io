# The Nth Number in Fibonacci Sequence
时间限制: 1000 ms内存限制: 2048 KB
## 问题描述
Fibonacci sequence是由通项公式F(n)=F(n-1)+F(n-2)定义的递推数列，且其中F(0)=0, F(1)=1。容易得知Fibonacci sequence关于n是以指数速度递增的。本题要求输入n，打印F(n)的值。由于F(n)增长速度很快，为了简化问题，题目只要求打印出F(n)关于素数9973取模的结果。
## 输入格式
输入数据总计n+1行。

第一行是一个整数n，表明接下来还有n行输入。

接下来的n行，每行是一个整数a(i)。
 
数据范围: 0 < n < 20,  0 <= a(i) < 2147483647.
 
## 输出格式
输出数据总计n行。每行一个整数，值是F(a(i)) mod 9973.
## 输入样例
5

1

2

8

10

15
## 输出样例
1

1

21

55

610
## 提示
关于这个问题，以及这门课程(电子系数据结构与算法)有一些故事在这里： https://kainwenblog.wordpress.com/2017/09/21/my-experience-as-a-ta/
