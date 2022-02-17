//
//  0209.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/02/09.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct : 사용자 정의 데이터 형

//    struct student{ // 구조채 이름은 아직 사용할 수 없다.(메모리 할당x)
//        int a;
//        float b;
//        char c;
//        char d[5];
//    };

//struct student st; // 구조체 변수 이름, 사용 가능 - st가 변수명

//st.a = 10; // 구조체 멤버 변수 사용, (구조체 변수.멤버 이름 변수)

//구조체 / 배열 차이점
//배열 : 오직 같은 데이터 형만을 가질 수 있다.
//구조체 : 여러 개의 데이터 형을 하나의 이름으로 선언.
//-------------------------------------

//int main(void) {
////    char name[10]; // 학생 이름
////    int kor;  // 국어점수
////    int eng;  // 영어점수
////    float avg; // 평균
////
////    printf("이름 : ");
////    scanf("%s", name);
////
////    printf("국어점수 :");
////    scanf("%d", &kor);
////
////    printf("영어점수 :");
////    scanf("%d", &eng);
////
////
////    avg = (kor + eng) / 2.0f; // 실수형의 기본 : double 그렇기 떄문에 뒤에 f 를 붙여야함
////
////    printf("\n");
////    printf("학생 이름 : %s \n", name);
////    printf("국어 점수: %d \n", kor);
////    printf("영어 점수 : %d \n", eng);
////    printf("평균은 : %5.1f \n", avg);
//
////--------위에 있는걸 아래 구조체 형태로 변환 위는 구조체를 사용하지 않음, 아래는 구조체를 사용함
//
//    struct student{    //구조체를 초기화 시키기 위해서는 변수에 해야한다
//        char name[15];
//        int kor;
//        int eng;
//        float avg;
//    };
//
//    struct student st; // struct student st = {"hi", 90, 80} 이런식으로 하면됨
//
//    printf("이름 : ");
//    scanf("%s", st.name);
//
//    printf("국어점수 :");
//    scanf("%d", &st.kor);
//
//    printf("영어점수 :");
//    scanf("%d", &st.eng);
//
//    st.avg = (st.kor + st.eng) / 2.0f;
//
//    printf("\n");
//    printf("학생 이름 : %s \n", st.name);
//    printf("국어 점수: %d \n", st.kor);
//    printf("영어 점수 : %d \n", st.eng);
//    printf("평균은 : %5.1f \n", st.avg);
//}
//----------------------
//구조체를 사용한 배열
//int main(void){
//    struct student{
//    char name[15];
//    int kor;
//    int eng;
//    float avg;
//    };
//
//    struct student st[3]; // 구조체 배열 선언
//
//    int i;
//    strcpy(st[0].name, "hi");
//    st[0].kor = 90;
//    st[0].eng = 80;
//    st[0].avg = (st[0].kor + st[0].eng) / 2.0f;
//
//    strcpy(st[1].name, "hello");
//    st[1].kor = 10;
//    st[1].eng = 80;
//    st[1].avg = (st[1].kor + st[1].eng) / 2.0f;
//
//    strcpy(st[2].name, "bye");
//    st[2].kor = 70;
//    st[2].eng = 80;
//    st[2].avg = (st[2].kor + st[2].eng) / 2.0f;
//
//    printf("=======구조체 배열 출력=======\n");
//    for (i=0; i<3; i++) {
//        printf("학생 이름 : %s\n", st[i].name);
//        printf("국어 점수 : %d\n", st[i].kor);
//        printf("영어 점수 : %d\n", st[i].eng);
//        printf("평균 : %5.1f\n", st[i].avg);
//        printf("\n");
//    }
//}
//-----------구조체 포인터 변수
//int main(void) {
//    struct student{
//    char name[15];
//    int kor;
//    int eng;
//    float avg;
//    };
//
//    struct student s;
//    struct student* p;
//
//    p = &s;
//
//    printf("이름 : ");
//    scanf("%s", p->name); //이름입력
//
//    printf("국어 점수 :");
//    scanf("%d", &p->kor);
//
//    printf("영어 점수 :");
//    scanf("%d", &p->eng);
//
//    p->avg = (p->kor + p->eng) / 2.0f;
//
//    printf("=======구조체 포인터=======\n");
//
//    printf("학생 이름 %s\n", p->name);
//    printf("국어 점수 %d\n", p->kor);
//    printf("영어 점수 %d\n", p->eng);
//    printf("평균 %5.1f\n", p->avg);
//}
//------구조체 포인터와 메모리 할당 함수를 이용하여 학생의 수, 이름, 나이를 입력받아 출력
//내가
//int main(void){
//    struct student {
//        char name[20];
//        int age;
//        int a;
//    };
//    struct student st;
//    struct student *p;
//
//    p =&st;
//
//    p = (int*)malloc(sizeof(int)*st.a);
//       for(int i=0;i<st.a;i++){
//           printf("입력 할 학생의 수 :");
//           scanf("%d", &st.a);
//       }
//    free(p);
//
//    printf("이름 :");
//    scanf("%s", p->name);
//
//    printf("나이 :");
//    scanf("%d", &p->age);
//
//}
//강사님
//int main(void){
//    struct student {
//        char name[15];
//        int age;
//    };
//    struct student *p;
//    int cnt;
//    printf("입력 할 학생의 수 :");
//    scanf("%d", &cnt);
//    //학생 수 만큼 메모리 할당
//    p = (struct student *)malloc(sizeof(struct student) * cnt);
//    
//    for(int i=0;i<cnt;i++){
//        printf("이름 및 나이 입력 :");
//        scanf("%s %d", p[i].name, &p[i].age);
//        
//    }
//    printf("\n-----학생 명단------\n");
//    for(int i=0;i<cnt;i++){
//        printf("이름 : %s, 나이 : %d \n", p[i].name, p[i].age);
//    }
//    free(p);
//}
//전처리문 : 컴파일 하기전에 미리 처리하는 프로그램
//#define : 예약어 // #difine hi "안녕하세요" 변수에 hi를 주면 안녕하세요가 출력
//#include :
