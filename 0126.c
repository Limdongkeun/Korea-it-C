//
//  0126.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/01/26.
//

#include <stdio.h>
#include <string.h>

//포인터 == 내 컴퓨터의 메모리 주소 -- 유일하게 하드웨어를 다룰 수 있다
//* : 포인터 연산자, & : 주소 연산자
//간접(참조)접근/직접접근
//하드웨어와 소통하면서 데이터를 원활하게 사용하기위해서, ex)다른 함수에 있는 지역변수를 사용하고 싶을때 가져 올 수 있다
//=========================================
//int main(void) {
//    int num1 = 100, num2 = 200;
//    int *pNum;
//
//    pNum = &num1;
//    (*pNum) += 30;  // 직접참조   ==   // num1 += 30; 간접(참조)
//
//    pNum = &num2;
//    (*pNum) -= 30;
//
//    printf("num1 : %d, num2 : %d", num1, num2);
//}
//===========================================
//*******************************존나중요
//int main(void){
//    int aa[3] = {10,20,30};
//
//    printf("aa[0]의 값은 %d, 주소는 %d \n", aa[0], &aa[0]);
//    printf("aa[1]의 값은 %d, 주소는 %d \n", aa[1], &aa[1]);
//    printf("aa[2]의 값은 %d, 주소는 %d \n", aa[2], &aa[2]);
//
//    printf("배열 이름 aa의 주소값은 %d\n", aa);
//    return 0;
//    // aa 첫번째 인덱스의 주소와 배열 이름 aa는 같은 주소를 같는다. 즉 배열이름주소가 인덱스의 시작 주소다
//}
//============================================
//int main(void){
//    int aa[3] = {10,20,30};
//                     &aa[0] == aa + 0
//    printf("&aa[0]는 %d, aa + 0은 %d\n", &aa[0], aa + 0);
//    printf("&aa[1]는 %d, aa + 1은 %d\n", &aa[0], aa + 1);
//    printf("&aa[2]는 %d, aa + 2은 %d\n", &aa[0], aa + 2);
//
//    return 0;
//}
//===========================================
//포인터배열
//int main(void){
//    char s[10] = "C-program";
//
//    char *p;
//    p = s;
//
//    printf("p + 3 : %s\n", p + 3);
//    printf("s[3] : %c\n", s[3]);      //s[3]은 3번째 인덱스 값을 가져와라 == *(p+3)도 3번째 인덱스값
//    printf("*(p+3) : %c\n", *(p+3));
//    return 0;
//}
//============================================
//int main(void){
//    char s[10] = "C-Program";
//    char *p;
//    int i;
//    p = s;
//
//    for(i = sizeof(s)-2; i>=0; i--)
//        printf("%c\n", *(p + i));
//
//    return 0;
//}
//=========================================퀴즈
//내가 짠거
//int main(void){
//    char s[10] = "abcdefghi";
//    char *p;
//    p = s;
//
//    for(int i = sizeof(s)-2; i>=0; i--){
//        printf("%c\n", *(p+i));
//    }
//    return 0;
//}
//int main(void){
//    char s[100];
//    printf("문자열을 입력해 주세요 :");
//    scanf("%c", &s[0]);
//    char *p;
//    p = s;
//
//    for(int i = sizeof(s)-2; i>=0; i--){
//        printf("%s\n", *(p+1));
//    }
//    return 0;
//}


//강사님
//int main(void){
//    char s[150];
//    int count, i;
//    char *p;
//
//    printf("문자열을 입력해 주세요 :");
//    scanf("%s", s); //문자열일때 &주소연산자 안씀
//
//    count = strlen(s);
//    p = s;
//
//    printf("문자열 역순으로 출력\n");
//    for(i=0; i<count; i++){
//        printf("%c", *(p+count-(i+1)));
//    }
//    printf("\n");
//}
//scanf의 단점
//공백을 인식하지 못해서 공백뒤로 쓴 글은 나오지 않는다 그래서 getch사용


