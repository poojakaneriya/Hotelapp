#include<stdio.h>

int fact(int a){
	if(a==0){
		return 1;
	} else{
		return a*fact(a-1);
	}
}
main(){	
	int x,f;
	printf("enter any number :");
	scanf("%d",&x);
	f = fact(x);
	printf("fact = %d",f);
}
