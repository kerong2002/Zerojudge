#include<stdio.h>
#include<math.h>
#include<string.h>
int char_to_number(char []);
int main()
{
    int  dif;

    char array1 [30]= {'\0'};
    char array2 [30]= {'\0'};
    while(scanf("%s",array1)!=EOF)
    {
        char s[30]= {0};

        if(array1[0]=='#')
            break;

        scanf("%s",array2);

        dif=abs(char_to_number(array1)-char_to_number(array2));

        if(dif==0)

            printf("ZERO\n");


        else
        {
            int i=0;
            while(dif>=1000)
            {
                dif-=1000;
                s[i]='M';
                i++;
            }
            if(dif>=900)
            {
                dif-=900;
                s[i]='C';
                s[i+1]='M';
                i+=2;
            }
            if(dif>=500)
            {
                dif-=500;
                s[i]='D';
                i++;
            }
            if(dif>=400)
            {
                dif-=400;
                s[i]='C';
                s[i+1]='D';
                i+=2;
            }
            while(dif>=100)
            {
                dif-=100;
                s[i]='C';
                i++;
            }
            if(dif>=90)
            {
                dif-=90;
                s[i]='X';
                s[i+1]='C';
                i+=2;
            }
            if(dif>=50)
            {
                dif-=50;
                s[i]='L';
                i++;
            }
            if(dif>=40)
            {
                dif-=40;
                s[i]='X';
                s[i+1]='L';
                i+=2;
            }

            while(dif>=10)
            {
                dif-=10;
                s[i]='X';
                i++;
            }
            if(dif>=9)
            {
                dif-=9;
                s[i]='I';
                s[i+1]='X';
                i+=2;
            }
            if(dif>=5)
            {
                dif-=5;
                s[i]='V';
                i++;
            }
            if(dif>=4)
            {
                dif-=4;
                s[i]='I';
                s[i+1]='V';
                i+=2;
            }
            while(dif>=1)
            {
                dif-=1;
                s[i]='I';
                i++;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}


int char_to_number(char s[])
{
    int sum=0;
    int i;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='C'&&s[i+1]=='M')
        {
            sum-=100;
        }
        else if(s[i]=='C'&&s[i+1]=='D')
        {
            sum-=100;
        }
        else if(s[i]=='X'&&s[i+1]=='C')
        {
            sum-=10;
        }
        else if(s[i]=='X'&&s[i+1]=='L')
        {
            sum-=10;
        }
        else if(s[i]=='I'&&s[i+1]=='X')
        {
            sum-=1;
        }
        else if(s[i]=='I'&&s[i+1]=='V')
        {
            sum-=1;
        }
        else if(s[i]=='I')
        {
            sum+=1;
        }
        else if(s[i]=='V')
        {
            sum+=5;
        }
        else if(s[i]=='X')
        {
            sum+=10;
        }
        else if(s[i]=='L')
        {
            sum+=50;
        }
        else if(s[i]=='C')
        {
            sum+=100;
        }
        else if(s[i]=='D')
        {
            sum+=500;
        }
        else if(s[i]=='M')
        {
            sum+=1000;
        }
    }
    return sum;
}
