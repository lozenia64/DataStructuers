#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

typedef struct{
	int year, month, day;
} date;

typedef struct{
	char name[10];
	int age;
	float salary;
	date dob; //구조 내에 구조를 정의할 수 있다.
} human;

//C에서는 boolean을 지원하지 않는다.
int humansEqual(human p1, human p2){
	if(strcmp(p1.name,p2.name)) return FALSE;
	if(p1.age!=p2.age) return FALSE;
	if(p1.salary!=p2.salary) return FALSE;
	return TRUE;
}

int main(){
	human person1, person2;
	
	strcpy(person1.name,"james");
	person1.age=10;
	person1.salary=35000;
	
	person1.dob.year=1994;
	person1.dob.month=2;
	person1.dob.day=7;
	
	//구조간의 대입은 표준에서 보장한다.
	person2=person1;
	
	if(humansEqual(person1,person2)) printf("The two human beings are the same\n");
	else printf("The two human beings are not the same\n");
}
