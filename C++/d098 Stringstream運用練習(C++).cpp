#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string input;
    while (getline(cin, input)){
        int sum=0;
        stringstream getN(input);//當字串讀入
        string save;//存取字串
        while(getN>>save){//移入
            stringstream load(save);
            int num;
            while (load >> num){//load string型態值放入int型態
                stringstream check;//檢查
                check<<num;//check放入int型態
                if (save==check.str()) sum+=num;//確定是否為int
            }
        }
        cout << sum <<endl;
    }
    return 0;
}
