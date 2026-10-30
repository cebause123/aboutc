2026/09/20
11:39:32 | begin
# py in digital analysis 
## c2
### 1
test="hello world"
tet[::-1]==反转==
=>"dlrow olleh" 
### 2
t1='hello'
(t1+' '+'f')*3
=>hello fhello fhello f
### 3.f
name="bob"
age=22
score=66.678
f"student={name},age={age},score={12*score/100:.2f}"
=>'student=bob,age=22,score=8.00'
### 4.type
type(age)
=>int
type(name)
=>str
### 5.多行文本
test="""
cebause in
son
hust
"""
#### functions:
=> '\ncebause in\nson\nhust\n'
test.strip()<mark>clear first and end \n</mark>
test.lstrip()**left \n**
test.rstrip()
test.split()
=>['cebause','in','son','hust']
type(test.split())
=>list

re=test.split('\n')
=>['','cebause in','son','hust','']


## c3
### 1.
a,*b,c=1,2,3,4,5
=>b=[2,3,4]
<mark>星号打末尾为好，只能是一个，b的type类型是list</mark>

### 2.if,elif,else
```
if se>70:
    print("B")
```
for-else

### 3.or and
<mark>前后接逻辑表达式</mark>
return true/false

### 4.
a=range(10)
a
=>range(0,10)
for i in a:
<mark>空格！</mark> print(i)
=>
0
1
2
3
4
5
6
7
8
9
a="asdfghj"
for pos,val in enumerate(a,**start=1**):<mark>start=n,line1 starts from the number n</mark>
<mark>空格！</mark>print(pos,val)
=>
0 a
1 s
2 d
3 f
4 g
5 h
6 j
for i in range(3,10):
3
4
5
6
7
8
9
for i in range(3,10,2):
=>
3
5
7
9
a="qwert"
b="asdfg"
for m,n in zip(a,b):
 print(m,n)
=>
q a
w s 
e d 
r f  
t g

a={3,4,76,34,2}
for i in a:
for i in sorted(a):<mark>从大到小排序</mark>
for i in reversed(a):
### 5.
a={
"as":99,
"nb":98
}
2026/09/20
16:01:25 | end for a stage



