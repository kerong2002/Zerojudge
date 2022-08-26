
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main()
{
	int a;
	while(cin>>a)
	{
		if(a==0)
		cout<<"0";
		else
		cout<<(a>0?"1":"-1");
	}

}
