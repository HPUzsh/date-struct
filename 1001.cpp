/*#include<stdio.h>
int main()
{
	int T,N,n,i=0;
	int x,y,sum=0;
	scanf("%d\n%d\n",&T,&N);
	while(i<T)
		i++;
		while(scanf("%d",&n))
		{
			for (x=0;x<N;x++)
			{
				scanf("%d",&y);
				if (y%2==0)
					sum+=y;
			}
			printf("%d\n",sum);break;

		}

}*/
/*{
	int T,N,sum=0,i;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<T;i++);
	{
		scanf("%d",&N);
		for(i=0;i<N;i++){
			scanf("%d",&a[i])
		if (a[i]%2==0)
			sum+=a[i];
		}

	}printf("%d",sum);
}
*/
//#include<stdio.h>
//int main()
//{
//	int T,N,sum=0,i,j,x;
//	scanf("%d\n",&T);
//	j=0;
//	for(i=1;i<=T;i++)
//	{
//		scanf("%d\n",&N);
//		while(j<N)
//		{
//				scanf("%d",&x);
//				if (x%2==0) sum+=x;
//				j++;
//			}
//		printf("%d\n",sum);
//
//	}
//
//}
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    int Noanswer;
    Noanswer=TRUE;
    if(n<=100)
    {
        for(a=0;a<=n/5;a++)
        for(b=0;b<=n/3;b++)
            {
                c=n-a-b;
                if(15*a+9*b+c==3*n)
                {
                    printf("%4d%4d%4d%\n",a,b,c);
                    Noanswer=FALSE;
                }
            }
    if(Noanswer==TRUE)
        printf("No Answer\n");
    }
    return 0;
}
/*#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{
	int x, y, z, n, NoAnswer;

	scanf("%d", &n);
	NoAnswer = TRUE;
	for(x = 0; x <= n/5; x++)  //穷举公鸡个数
		for(y = 0; y <= n/3; y++) //穷举母鸡个数
		{
			z = n - x - y;  //其余是鸡仔
			if(15 * x + 9 * y + z == n *3 )  //注意避免浮点运算
			{
				printf("%4d%4d%4d\n", x, y, z);
				NoAnswer = FALSE;
			}
		}
	if(NoAnswer == TRUE)
		printf("No Answer\n");
	return 0;
}*/

