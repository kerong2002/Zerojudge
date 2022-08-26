#include<iostream>
#include<algorithm>

using namespace std ;

int main() {
	int s,a[21],b;
	cin>>s;

	for(int i = 0 ; i < s ;i ++){
		cin>>a[i];
	}
	sort(a,a+s);
	for(int x = 0 ; x<s ; x ++){
		cout<<a[x]<<" ";
	}
	cout<<"\n";
	if (a[0]>=60){
		cout<<"best case"<<endl;
    	cout<<a[0]<<endl;
	}
	else if (a[s-1]<60){
		cout<<a[s-1]<<endl;
		cout<<"worst case"<<endl;
	}
	else
	{
		for(int x = 0 ; x < s ; x++)
		{
			if (a[x]>= 60){
			cout<<a[x-1]<<endl;
			cout<<a[x]<<endl;
			break;
			}
		}
	}



	return 0 ;
}
