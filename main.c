#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student{
	int ID; // �й� 
	char name[100]; // �̸� 
	float grade; // ���� 
};
	

int main(void) {
	struct student s1 = {2315064, "Cho", 4.3};
	
	system("PAUSE"); 
	return 0;
}
