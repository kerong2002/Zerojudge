#include <iostream>
using namespace std;
int main(){
      //string alph="ABCDEFGHJKLMNPQRSTUVXYWZIO";
      int alph_n[]={1,10,19,28,37,46,55,64,39,73,82,2,11,20,48,29,38,47,56,65,74,83,21,3,12,30};
      string idnum;
      int d;


      while( cin >> idnum){
            d=0;
            for(int i=8;i>=1;i--){
                  d += (int(idnum[8-i]) -48)*i;
            }
            d+=int(idnum[8])-48;
            //cout << d << endl;
            for(int i=0;i<26;i++){
                  if((d+alph_n[i])%10 ==0){
                        cout << char(65+i);
                  }
            }
            //cout << d << endl;
            cout << endl;
      }
      return 0;
}
