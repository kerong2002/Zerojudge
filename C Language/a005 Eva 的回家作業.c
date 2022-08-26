#include <stdio.h>
int main() {
	int T ;
	scanf("%d",&T);
	while (T--) {
		int a, b, c, d ;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		{
			if((a+d)==(b+c)) {
				printf("%d %d %d %d %d\n",a,b,c,d,2*d-c);
			}

			else if(a*d==b*c) {
				printf("%d %d %d %d %d\n",a,b,c,d,d*d/c);
			}
		}
	}
}
