# vim

## 1.skip
### <span style="color:red">word</span>
w:skip to next word's head
b:skip to last word's head(back)
e:skip to next word's tail(end)
ge:~e
### mark
m{mark}:the current location is marked by the name {mark}
`{mark}:using this to move to the marked location
<mark>{mark} is a char from a to z</mark>
***
- ``上次跳转前的位置 
- `.上次修改的位置
- `^上次插入的位置
***

### line
^$:the home or end of a line 
%:the another one of(),[],/**/

## <span style="color:green">2.search</span>

### char
**f(char)/t(char)**:<mark>skip to the next char or its head</mark>
**;/,** to do again ahead or back

### string
**/{parttern}  ?{parttern}**
*==/{parttern} the word that cursor in
n/N next one or the last one


## 3.<span style="color:brown">conbination</span>
**operator+motion=action**
|operator|motion(移动)|action|
|:--:|:---:|:---:|
|c||dgg(delete the first line)|
|d||ye(copy to the end of a word)|
|y||d$(delete to the end of the line)|
|v||dt;==(delete till ';'or'h'or' ')==|
|||dd/yy(operate to the line)|

**count+operator+textobjects**
|operator|textobjects|action|
|:--:|:---:|:---:|
||i/a+w(word),(/),[/],"/"|diw(delete inner word)|
||i/a+s(sentence)|ci(=>(change the inner)|
||i/a+p(paragraph)|yi(=>(yank the inner)|

`i for inner,a额外包括周围的空格或配对符`
`textobjects could't be used along while motions can`
<mark>remember the [count] for the efficiency</mark>

### other operators & commands
- gu/gU/g~:转小写/转大写/翻转(operator)
`use '~' to change the  simple letter which the cursor on`
- J:join:连接两行
- ctrl+a/ctrl+x:+1/-1
- g+ctrl+a:create a step-increased line
- <</>>:左右缩进


## <span style="color:red">4.essential</span>
- .重复上一次的修改
- u撤销上一次的修改
- ctrl+r重做上一次的修改(~u)

 

## <span style="color:blue">5.register</span>
一个字符(a-z/0-9)对应一个寄存器
- ":默认寄存器
- %:当前文件名
- .
- :
  
**"{register}+operator**
"ayy
"bdiw
"cp

`(A-Z) to append instead of cover`

## <span style="color:green">6.macro(宏)</span>
录制操作，允许重放
- q{register}:begin
- q:end
- @{register}:going again
- @@:again
`not using '.',using 'u'or 'ctrl+r' is available`
**`count for effiency`**

# II commands mode

## <span style="color:purple">1 :[range]{excommand}[args]</span> 

### range
- **could be a number stand for this line**
<mark>0 stand for the virtual line before the line1</mark>
- **$**:the last line
- **'.'**:the line which cursor in
- /{parttern}/:the line which has the next parttern
- %:all the lines
- '</'>:shift+v <mark>tips:v is the visual while V is called **the visual line**</mark>

`.,.+3 yank`p or P to print

`如果不指定的话就是本行`
### excommand
delete,yank
### args
### <span style="color:blue">line's copy move put</span> 

- [range] copy {address}:==copy the lines in range to the back of {address}==
- [range] move {address}:==move ...==
- {address} put [x]:==put things from register[x] to {address}==

`using '0' as a virual address to put things to the back of line1`

## <span style="color:purple">2. :[range]normal{command} //normal命令的批量操作</span>

**use % as range to conduct the whole lines**

