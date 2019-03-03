// blog.naver.com/ljy9378
// Copyright by 로졔 2019

#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

typedef struct{
	int year, month, day;
} date;

typedef struct{
    enum tagField { female, male } sex; //열거형을 사용.
    union{
        //female인 경우 chiledren의 수를, male인 경우 beard의 여부를 저장.
        int children, beard;
    } uni;
} sexType;

typedef struct{
	char name[10];
	int age;
	float salary;
	date dob; //구조 내에 구조를 정의할 수 있다.
    sexType sexInfo;
} human;

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

    person1.sexInfo.sex = male;
    person1.sexInfo.uni.beard = FALSE;

    person2.sexInfo.sex = female;
    person2.sexInfo.uni.children = 4;
    //person2.sexInfo.uni.beard = TRUE; //이렇게 하더라도 beard는 무시되며 children에 1이 지정.
}
