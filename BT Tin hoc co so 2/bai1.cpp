#include <stdio.h>
#include <string.h>

int main(){
	int age;
	char name[1000];
	printf("Moi ban nhap ten: ");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name, "\n")]= '\0';
	
	printf("Moi ban nhap tuoi: ");
	scanf("%d",&age);
	
	printf("Ten ban la %s, ban nam nay %d tuoi",name,age);
	
}
