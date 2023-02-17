#include<stdio.h>
void div(int a){
	
	if(a%3==0 && a%5==0){
		
			printf("The no. %d is divisible by 3 & 5 ",a);
	}else{
		
			printf("The no. %d is not divisible by 3 & 5 ",a);
	}
}


main(){
	
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
    printf("\n");
    div(a);

}
	
