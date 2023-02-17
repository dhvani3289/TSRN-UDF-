#include<stdio.h>
void cube(int a){
	
	printf("The cube of the given number is :%d",a*a*a);
}


main(){
	
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
    printf("\n");
    cube(a);

}
	
