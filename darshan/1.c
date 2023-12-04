#include<stdio.h>
sum(int n,int i,int s){
	
if(i<=n)
{
	s+=i;
    i++;
    sum(n,i,s);
}
else{
	printf("%d",s);
}
}
main(){
    int n;
printf("enter a number:");
scanf("%d",&n);
	sum(n,1,0);
}
