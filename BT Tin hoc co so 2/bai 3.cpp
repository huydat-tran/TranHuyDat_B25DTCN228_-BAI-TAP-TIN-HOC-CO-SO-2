#include <stdio.h>

void primeCalculate(int arr[100],int length){
	int sum = 0;
	for(int i = 0; i < length; i ++){
		if(arr[i] % 2 != 0){
			sum += arr[i];
		}
	}printf("Sum of prime numbers %d",sum);
}

int main(){
	int numbers[100];
	int i,size;
	
	printf("Enter number of index that wants to add: ");
	scanf("%d",&size);
	
	printf("Enter values of array: \n");
	for(i = 0 ; i < size; i ++){
		printf("numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	
	primeCalculate(numbers,size);
}
