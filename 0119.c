//
//  0119.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/01/19.
//

#include <stdio.h>

//함수

//C 언어는 항상 위에서 아래고 절차적으로 내려오면서 실행하기 때문에 사용자 지정 함수는 항상 main 위에, main함수는 항상 맨 아래

//int -- 반환형태, main -- 함수이름, void -- 입력형태(매개 변수), ***{}문 -- 함수의바디(statement)***
// return 의마 2가지
// 1. 함수 실행이 정상적으로 됨
// 2. 값을 반환하고 프로그램을 빠져나간다

// 지역변수(local) <==> 전역변수(global) 지역변수가 더 우선순위를 가진다

// 반환형태 : int, void (int가 있으면 구문안에 !무조건! return 0; 이 있다)
// 함수: 1. 라이브러리 함수, 2. 사용자 정의 함수(내가 만드는 것)

//사용자 정의 함수 (어떤 함수를 만드냐에 따라서)
// 1. 반환형태(ㅇ), 매개변수(ㅇ)
// 2. 반환형태(x), 매개변수(ㅇ)
// 3. 반환형태(ㅇ), 매개변수(x)
// 4. 반환형태(x), 매개변수(x)

//int main(void) {
//    int num1, num2;
//    num1 = printf("12345\n");                //printf()는 자체적으로 반환형태를 가지고 있기 때문에 반환됨
//    num2 = printf("Frist C Programming\n");
//
//    printf("%d %d\n", num1, num2);
//    return 0;
//}
//
//
//int add(int num, int num1) {
//    int result = num + num1; // add의 바디부분
//    return result;
////}
// ----------------------

//
//int add(int num1, int num2);
//int main(void) {                                  //main이라는 함수는 무조건 있어야함
//    int result;
//    result = add(3, 4);
//    printf("결과1 : %d\n", result);
//    result = add(6, 4);
//    printf("결과2 : %d\n", result);
//    return 0;
//}
//
//int add(int num1, int num2){
//    return num1 + num2;
//}
// =====================================
//int add(int num1, int num2){
//    return num1 + num2;
//}
//
//void showAddResult(int num) {
//    printf("덧셈의 결과는 : %d\n", num);
//}
//
//int readNumber(void) {
//    int num;
//    scanf("%d", &num);
//    return num;
//}
//
//void usingToPro(void) {
//    printf("두 정수를 입력해 주세요\n");
//    printf("두 정수를 입력 시작 : \n");
//}
//
//int main(void) {
//    int result, num1, num2;
//    usingToPro();
//    num1 = readNumber();
//    num2 = readNumber();
//    result =add(num1, num2);
//    showAddResult(result);
//    return 0;
//}
// ==================위 아래
//int add(int num1, int num2);
//
//void showAddResult(int num);
//
//int readNumber(void);
//
//void usingToPro(void);
//
//int main(void) {
//    int result, num1, num2;
//    usingToPro();
//    num1 = readNumber();
//    num2 = readNumber();
//    result =add(num1, num2);
//    showAddResult(result);
//    return 0;
//}
//
//int add(int num1, int num2){
//    return num1 + num2;
//}
//
//void showAddResult(int num) {
//    printf("덧셈의 결과는 : %d\n", num);
//}
//
//void usingToPro(void) {
//    printf("두 정수를 입력해 주세요\n");
//    printf("두 정수를 입력 시작 :");
//}
//
//int readNumber(void) {
//    int num;
//    scanf("%d", &num);
//    return num;
//}
// ------------------
//퀴즈 4와 7중에서 큰수는 7입니다. 7과 2중에서 큰수는 7입니다

//int numberCom(int num1, int num2);
//
//int main(void) {
//    printf("4와 7중에서 큰수는 %d입니다\n", numberCom(4, 7));
//    printf("7과 2중에서 큰수는 %d입니다", numberCom(2, 7));
//}
//
//int numberCom(int num1, int num2) {
//    if(num1 > num2){
//        return num1;
//    } else
//        return num2;
//}
// ---------------------
//int num3 = 15;
//
//int funcOne(void) {
//    int num = 10;
//    num3 += 5;
//    num++;
//    printf("funcOne num : %d\n", num);
//    return 0;
//}
//
//int funcTwo(void) {
//    int num1 = 20;
//    int num2 = 30;
//    num1++;
//    num2--;
//    printf("num1 & num2 : %d %d \n", num1, num2);
//    return 0;
//}
//
//int main(void) {
//    int num = 17;
//    printf("%d\n", num3);
//    funcOne();
//    printf("%d\n", num3);
//    funcTwo();
//    printf("main num : %d\n", num);
//    return 0;
//}
// ---------------------------------

//int main(void) {
//    int cnt;
//    for(cnt = 0; cnt < 3; cnt++) {
//        int num = 0 ;
//        num ++;
//        printf("%d번째 반복, 지역변수 num은 %d \n", cnt + 1, num);
//    }
//
//    if (cnt == 3) {
//        int num = 7;
//        num++;
//        printf("블록문 내에 있는 지역변수 num은 %d \n", num);
//    }
//    return 0;
//}

// 지역변수
//1. 함수가 가지고 있다(int a, int b) {
// int result a + b;
//}
//2. 자동 초기화가 되지 않는다

