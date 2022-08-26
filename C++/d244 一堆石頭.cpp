#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    unordered_map<int,int> rock;
    while(cin>>n){
        unordered_map<int,int>::const_iterator got=rock.find(n);
        if(got==rock.end()){
            rock[n]=1;
        }
        else{
            rock[n]+=1;
        }
    }
    unordered_map<int,int>::const_iterator check;
    for(check=rock.begin();check!=rock.end();check++){
        if(check->second%3){
            cout<<check->first;
            break;
        }
    }
    return 0;
}
