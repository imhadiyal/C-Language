#include<stdio.h>
main(){
	char em,psd;
	

    int i;
   
	printf("enter a email:");
	scanf("%s",&em);
	printf("enter a password:");
	scanf("%s",&psd);
char email[50];
char pass[50];
	
	for(i=0;email[i]!='\0';i++)
	{
	
		if(email[i]=='.'&&email[i]=='@'){
		
		em=1;
	   }
		else if(pass[i]>=8 &&pass[i]=='A'||pass[i]<='Z'&&pass[i]=='a'&&pass[i]<='z'){
		
		psd=1;
     	}
	}
	if(email==1 && pass==1)
	{
		printf("login successfuly");
	}
	else
	{
		printf("check your email and password");
	}
}
