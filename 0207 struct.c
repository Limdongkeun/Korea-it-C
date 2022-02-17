//
//  0207 struct.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/02/07.
//
//#define_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//구조체(struct) = 사용자 정의 데이터 형
//=
//int a;
//float f;
//char name[20];
//char c;
//위에 서로 다른 정수형 실수형 문자형등을 다 무시하고 하나로 만들어줌
//struct test{ test는 구조체의 이름 test라는 데이터형을 가지고 있는거고 a,b,c,cc의 데이터 형을 가지고 있는것
//예를 들어 test = int test의 byte수는 포함하고 있는 데이터형의 byte를 다 더한값
//    int a;
//    float b;
//    char c;
//    char cc[20];
//};
//struct test t; 예를들어 int a에서 t가 a가 구조체 변수
//int main(void){ //아직 저장공간을 확보하지 못함
//    struct student{ // 구조채 이름은 아직 사용할 수 없다.(메모리 할당x)
//        int a;
//        float b;
//        char c;
//        char d[5];
//    };
//
//    struct student st;
//
//    st.a = 10;
//    st.b = 1.2f;
//    st.c = 'A';
//    strcat(st.d, "BCD");
//
//    printf("st.a = %d \n", st.a);
//    printf("st.b = %f \n", st.b);
//    printf("st.c = %c \n", st.c);
//    printf("st.d = %s \n", st.d);
//    return 0;
//
//}
//--------------------
//typedef struct student{
//    int eng;
//    int math;
//    float avg;
//}st;
////위에처럼 쓰면 바로 변수명을 선언하여 사용 가능함



//char name[20];
//int kor;
//int eng;
//float avg;
////위에서를 아래 구조체로 바꿈
//typedef struct student{
//    char nema[20];
//    int kor;
//    int eng;
//    float avg;
//}st;
//
//st = {"gds", 90,80};
