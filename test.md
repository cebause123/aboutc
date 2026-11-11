# <font face="仿宋" color=green>基础教程</font>
## <center><font size=8>cebause</font></center>
### 一、一些基本操作
1.标题
一级标题
二级标题
2.引用
>一些引用的话
>>更多引用的话
3.
   - [ ] dothething
   - [x] dothe another thing

4.
    |what|dont|know|
    |:---|:---:|----:|
    |go  |sky |big  |
    |1|2|3|
    |$|5|6|
不要缺少表头
不换行怎么样
***
分开了
5.字体
*斜体*
==高亮==
**B**
***IB?***
~~delete~~
<u>下划线</u>
- 脚注
这是注释[^1]没有问题

6.**code**
```
include<stdio.h>
int main ()
{
    return 0;

}
```
`printf("helloworld");`

### 二、ahout math
#### 1.行内式(inline)和独立式(independent)
$2x^3+y_2=1$
$$
z_4+x^y=z_3
$$
***
$$x^{x_1+y^3}\\
x^2=90$$
>可以看到{}具有别的用途，所以想使用大括号的时候要使用转义符\,而(),[]不需要转义.其他的一些转义字符像\sqrt,本身语法就涵盖了{}，当然可以直接用了。

$$f(x,y)=x^2+y,x\epsilon[3,5],y\epsilon\{1,2,3\}$$
***
$$\emptyset$$

$$
\left.(\sqrt{\frac{1}{2}}\right)
$$


$$
\sqrt[3]{9}
$$


$$
\frac{3}{4},\frac{4}{5}, \dots ,\frac{n}{n+1}
$$

$$
\vec a\\
\vec {ab}
$$

$$
\lim_{n\rightarrow-\infty}\frac{1}{n}
$$

$$
y \prime=nx^{n-1}
$$
##### 方程组
$$
y:\begin{cases}x+y=1\\
x-y=0 \end{cases}
$$

$$
A= \left[\begin{matrix}
1&2&3\\
4&5&6\\
7&8&9\\
\end{matrix}\right]
$$

   **\left[** 是一个整体
   **\right]** 也是一个整体

$$
\log_{10}{e}=\lg{e}\\
\log_{e}{100}=2\ln{10}
$$

$$
\leq\\
\le\\
4\not\leq2\\
3\geq2\\
\pi\approx3.141592653589793\\
F\propto k\\
\div\\

$$

$$

\sum_{i=0}^{\infin} x_i\\
\prod_{i=0}^{n} x_i\\
\overline{a+b}\\
$$

$$
\int_{1}^{4} f(x)dx\\
\int_{2}^{3} \int_{3}^{4} f(x,y)dxdy\\
\iint\\
\oint\\
\oiiint
$$

$$
30^\circ\\
\angle\\
\sin(x)\\
$$

$$
\emptyset\\
\in\\
\notin
$$

##### 希腊字母表
$\alpha$
$\Alpha$

| 序号 | 希腊字母 | Markdown 转义符 |
|:---:|:---:|:---|
| 1 | α | `\alpha` |
| 2 | β | `\beta` |
| 3 | γ | `\gamma` |
| 4 | δ | `\delta` |
| 5 | ε | `\epsilon` |
| 6 | ζ | `\zeta` |
| 7 | η | `\eta` |
| 8 | θ | `\theta` |
| 9 | ι | `\iota` |
| 10 | κ | `\kappa` |
| 11 | λ | `\lambda` |
| 12 | μ | `\mu` |
| 13 | ν | `\nu` |
| 14 | ξ | `\xi` |
| 15 | ο | `\omicron` |
| 16 | π | `\pi` |
| 17 | ρ | `\rho` |
| 18 | σ | `\sigma` |
| 19 | τ | `\tau` |
| 20 | υ | `\upsilon` |
| 21 | φ | `\phi` |
| 22 | χ | `\chi` |
| 23 | ψ | `\psi` |
| 24 | ω | `\omega` |





























[^1]:一个注释的实例
