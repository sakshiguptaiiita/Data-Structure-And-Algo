#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    long long t;
    scanf("%llu\n",&t);
    while(t--)
    {
        long long n;
        scanf("%llu\n",&n);
        long long a[n][n];
        int h=0,g=0;
        while(h<n)
        {g=0;
            while(g<n)
            {scanf("%llu ",&a[h][g]);
            g++;}
            h++;
        }
        h=0;g=0;int c=-1;
        while(h<n)
        {c=-1;
        g=0;
       
            while(g<n)
                {if(a[h][g]==0)
                 { 
                     c=1;
                     break;}
                g++;
                }
         if(c!=1)
            {c=100;
                break;
              }
                if(c==1)
                    {c=9;
                    }
        h++;
        
        }
      
        h=0;g=0;int f=-1;
       while(g<n)
        {f=-1;
        h=0;
            while(h<n)
                {if(a[h][g]==0)
                 { f=1;break;}
           h++;
                }
         if(f!=1)
            {f=100;
                break;}
                if(f==1)
                    f=9;
        g++;
        }
        if(f==100 || c==100)
            {printf("NO\n");
            }
       if(f==9 && c==9)
        printf("YES\n");

    }
    return 0;
}