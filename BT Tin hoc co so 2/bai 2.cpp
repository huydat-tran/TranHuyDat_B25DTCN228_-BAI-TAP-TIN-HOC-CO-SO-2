#include <stdio.h>

void numberType(int number){
	if(number % 2 ==0){
		printf("%d la so chan",number);
	}else{
		printf("%d la so le",number);
	}
}

int main(){
	int n;
	printf("Nhap 1 so nguyen bat ki: ");
	scanf("%d",&n);
	
	numberType(n);
}
