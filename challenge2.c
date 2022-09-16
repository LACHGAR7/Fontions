#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a ,b, c;

   printf("entrer la valeur de a:\n");
   scanf("%d",&a);

   printf("entrer la valur de b:\n");
   scanf("%d",&b);


   printf("la valeur de a est %d\nla valeur de b est %d\n",a,b);


   echange(a ,b );


   return 0;

}
 echange( a,  b)

{
int
   c=a;
   a=b;
   b=c;


printf("la valeur de a est %d\nla valeur de b est %d\n",a,b);
}
