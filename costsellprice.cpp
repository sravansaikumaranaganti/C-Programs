#include <iostream>
int main(){
  int cp,sp;
printf("enter the cost price:");
scanf("%d",&cp);
printf("enter the sell price:");
scanf("%d",&sp);
if(cp<sp){
  printf("profit");
  }
else if(cp>sp){
printf("loss");
}
else{
printf("no loss no profit");
}
  return 0;
}
  
