#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        cout << str << endl;
        int left = 0;
        int right = str.size();
        bool palindrome = true;
        while(left < right){
            while(!isalnum(str[left])){
                if(left>=right){
                    break;
                }
                left++;
            }

            while(!isalnum(str[right])){
                if(left>=right){
                    break;
                }
                right--;
            }
            char A = toupper(str[left]);
            char B = toupper(str[right]);
            if(A!=B){
                palindrome = false;
                break;
            }
            else{
                left++;
                right--;
            }
        }
        if(palindrome){
            cout << "-- is a palindrome" << endl;
        }
        else{
            cout << "-- is not a palindrome" << endl;
        }
    }
    return 0;
}
