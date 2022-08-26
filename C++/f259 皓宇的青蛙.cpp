#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;

int main(int *argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    unordered_map<string,bool> search;
    string name;
    while(cin>>name){
        cout<<search[name]++?"1":"0";
        cout<<endl;
    }
    return 0;
}
