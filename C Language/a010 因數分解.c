#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d",&a)!=EOF)
    {
    	b=2;
        while(b<=a)
        {
            c=0;
            while(a%b==0)
            {
                a=a/b;
                c=c+1;
            }

            if(c>0)
            {
            	printf("%d",b);
                if ( c > 1 )
				printf("^%d",c);
                if ( a > 1 )
				printf(" * ");
            }
            b++;
        }
        printf("\n");
   }
   return 0;
}
