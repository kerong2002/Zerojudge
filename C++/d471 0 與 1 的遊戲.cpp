#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        bitset<15> pick;
        for(int y=0;y<pow(2,n);y++){
            pick=y;
            for(int x=n-1;x>=0;x--){
                cout<<pick[x];
            }
            cout<<endl;
        }
    }
    return 0;
}
