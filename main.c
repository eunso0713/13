#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student{
	int ID; // �й� 
	char name[100]; // �̸� 
	double grade; // ���� 
};
	

int main(void) {
	
	//instance ���� 
	struct student s1 = {231506, "Cho", 4.3};
	//�ٸ� �� ���� 
	s1.ID = 123456;
	//strcpy(s1.name, ��Eunso��);
	//�� ���ڸ� �ҰŸ�
	s1.name[0]='c';
	s1.grade = 4.2;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade); 
	system("PAUSE"); 
	return 0;
}
