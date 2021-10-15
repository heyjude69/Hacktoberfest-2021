#include <stdio.h>
#include <math.h>

void HCFLCM(){
    int a, b, x, y, t, gcd, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  printf("HCF of %d and %d = %d\n", x, y, gcd);
  printf("LCM of %d and %d = %d\n", x, y, lcm);
}

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        printf("2 ");
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%d ", n);
}
void factors(){
     int n,c=0,sum=0,odd=0;
    printf("Enter the number to calculate : ");
    scanf("%d",&n);
    printf("\nThe factors are : \n");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
            sum+=i;
            printf("%d ",i);
            if(i%2!=0) odd++;
        }
    }
    printf("\n\n\nTotal number of factors : %d\n\n",c);
    printf("Sum of factors : %d\n\n",sum);
    printf("Odd number of factors : %d\n",odd);
    printf("Even number of factors : %d\n",c-odd);
    printf("\nIn terms of prime factors: \n");
    primeFactors(n);
}
int main()
{
   
    factors();
    return 0;
}
