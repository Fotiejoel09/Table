#include <stdio.h>
int main (){
	int n;
	printf("Enter an integer\n");
	scanf("%d",&n);
	printf("multiplication table od %d:\n" , n);
	printf("---------------------------\n");
	for (int i=1; i<=10; ++i){
		printf("%d * %d = %d\n" , n,i,n*i);
	}
	return 0;
} 
