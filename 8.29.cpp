//#include<stdio.h>
//int is_prime(int n)
//{
//    int i;
//    if(n<=1)
//        return 0;
//    else
//    {
//        for(i=2;i*i<=n;i++)
//            {
//                if(n%i==0)
//                    return 0;
//                    break;
//            }
//            if(i<=n/i)
//                return 0;   //证明该数不是素数。
//            else
//                return 1;
//    }
//}
//
//int main(void)
//{
//    int n;
//    scanf("%d",&n);
//    if(is_prime(n))
//        printf("This is a prime\n");
//    else
//        printf("This is not a prime\n");
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    int n,i;
//    scanf("%d",&n);
//    if(n<=1)
//        printf("This is not a prime\n");
//    else
//    {
//       int k=sqrt(n) ;
//       for(i=2;i<=k;i++)
//        if(n%i==0) break;
//       if(i<=k)
//        printf("This is not a prime.\n");
//       else
//        printf("This is a prime.\n");
//    }
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b;
    char c;
    scanf("%f %c %f",&a,&c,&b);
    if(c=='+'||c=='-'||c=='*'||c=='/')
    {
        switch(c)
        {
            case '+':printf("%.2f\n",a+b);break;
            case '-':printf("%.2f\n",a-b);break;
            case '*':printf("%.2f\n",a*b);break;
            case '/':
                {
                    if(fabs(b)<1e-10)
                    {
                        printf("Wrong input!\n");
                        break;
                    }

                else
                {
                    printf("%.2f\n",a/b);
                    break;
                }
                }
        }
    }
    else
        printf("Wrong input!\n");
    return 0;
}
