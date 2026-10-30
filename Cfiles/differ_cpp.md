# cpp

## string
```cpp
#include<iostream>
using namespace std;
int main()
{
    //int n;
    //cin>>n;
    //cout<<"cprimerplus"<<n++<<std::endl;
    string s1="hi";
    string s2="cpp";
    string s=s1+s2;
    string s0=s1+s1;
    cout<<s<<endl<<s0<<endl;
    return 0;
}
```

```cpp
#include<iostream>
using namespace std;
int main()
{
    string a="hello world";
    cout<<a.length()<<endl;
    string aa=a.substr(2,3);
    cout<<aa<<endl;
    string ab=a.substr(6);
    cout<<ab<<endl;
    return 0;
}
```
>output:
>>11
llo
world

## 

### 1.vector
```cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> a(10,2);
    cout<<a.size()<<endl;//return 10
    a.resize(12);//define the size again
    for(int i=0;i<12;i++){
        a[i]=i;
    }
    a.push_back(12);//add 12 in the end
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
```
```cpp
int main()
{
    vector <int> a(10,0);
    for(auto p=a.begin();p!=a.end();p++){
        cout<<*p<<endl;
    }//遍历
    return 0;
}
```
### 2.set(集合)
```cpp
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s;//no parameter behind
    s.insert(4);
    s.insert(7);
    s.insert(14);
    s.insert(3);//output will range from small to large
    for(auto p=s.begin();p!=s.end();p++){
        cout<<*p<<endl;
    }
    cout<<(s.find(3)!=s.end())<<endl;//return 1
    cout<<(s.find(4)!=s.end())<<endl;//1
    cout<<(s.find(66)!=s.end())<<endl;//0
    s.erase(3);
    for(auto q=s.begin();q!=s.end();q++){
        cout<<*q<<endl;
    }
    cout<<endl; 
    return 0;
}
```
### 3.map(键值对)
```cpp
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <string,int> m;
    m["hello"]=4;
    m["world"]=3;
    m["habcd"]=10;
    m["afirst"]=11;//首字母的ascII码表顺序
    cout<<m["hello"]<<endl;
    for(auto p=m.begin();p!=m.end();p++)
    {
        cout<<p->first<<":"<<p->second<<endl;
    }
    cout<<m.size()<<endl;
    return 0;
}
```
>output:
>>4
afirst:11
habcd:10
hello:4
world:3
4

### 4.stack(栈)先进后出
```cpp
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);//压栈
    s.pop();//出栈
    s.push(7);
    cout<<s.top()<<endl;//只有栈顶的元素可以被获得
    cout<<s.size()<<endl;
    return 0;
}
```

### 5.queue(队列)先进先出
```cpp
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int> s;
    for(int i=1;i<=10;i++){
        s.push(i);//入队
    }
    cout<<s.front()<<endl;//访问队首1
    cout<<s.back()<<endl;//访问队尾10
    s.pop();//出队,先进先出，出1
    cout<<s.front()<<endl;//访问队首2
    cout<<s.back()<<endl;//访问队尾10
    s.size();
    return 0;
}
```
### unordered_map&unordered_set
```cpp
#include<unordered_map>
#include<unordered_set>
```
  










