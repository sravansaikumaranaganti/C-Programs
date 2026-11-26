#include <stdio.h>
int main(){
    int a,b,temp;
   printf("enter the values:");
  scanf("%d%d%d",&a,&b);
   temp = a;
    a = b;
    b = temp;
printf("After swaping the numbers a=%d,b=%d\n"a,b);
return 0;
}
    
