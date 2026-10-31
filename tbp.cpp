#include<iostream>
#include<vector>
#include<algorithm>//sort
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int main()
{
    vector <int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(10-i);
    }
    for(auto p=v.begin();p!=v.end();p++){
        cout<<*p<<" ";
    }cout<<endl;
    sort(v.begin(),v.end(),cmp);
    for(auto p=v.begin();p!=v.end();p++){
        cout<<*p<<" ";
    }cout<<endl;

    return 0;
}