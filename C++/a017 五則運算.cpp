#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int num[127];
	num['+']=-1;num['-']=-1;num['*']=0;num['/']=0;num['%']=0;num['(']=1;
	string line;
	while(getline(cin,line)){
		stringstream ss(line);
		string s,ansl;
		stack<char> st;
		while(ss>>s){
			if(isdigit(s[0])){
				ansl+=s;
				ansl+=' ';
			}
			else{
				if(s[0]==')'){
					while(st.top()!='('){
						ansl+=st.top();
						ansl+=' ';
						st.pop();
					}
					st.pop();
				}
				else{
					while(st.size()&&num[st.top()]>=num[s[0]]&&st.top()!='('){
						ansl+=st.top();
						ansl+=' ';
						st.pop();
					}
					stringstream sss(s);
					char c;sss>>c;
					st.push(c);
				}

			}
		}
		while(st.size()){
			ansl+=st.top();
			ansl+=' ';
			st.pop();
		}
		stack<long long int> ans;
		stringstream ssa(ansl);
		string sa;
		while(ssa>>sa){
			if(isdigit(sa[0])){
				stringstream dig(sa);
				int num;dig>>num;
				ans.push(num);
			}
			else{
				long long int a,b;
				a=ans.top();
				ans.pop();
				b=ans.top();
				ans.pop();
				switch(sa[0]){
					case '+':
						ans.push(b+a);
						break;
					case '-':
						ans.push(b-a);
						break;
					case '*':
						ans.push(b*a);
						break;
					case '/':
						ans.push(b/a);
						break;
					case '%':
						ans.push(b%a);
						break;
				}
			}
		}
		cout<<ans.top()<<'\n';
	}
	return 0;
}
