//
//  0124.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/01/24.
//

#include <stdio.h>
#include <string.h> // 문자열 함수를 이용하기 위해서

//전역 변수
// 자동으로 초기화가 된다, int : 0, float : 0.0


//void add(int val);
//int num;  //전역변수는 자동 초기화
//
//int main(void) {
//    printf("num: %d \n", num); //0
//    add(1);
//    printf("num: %d \n", num); //1
//    num++;
//    printf("num: %d \n", num); //2
//    return 0;
//}
//
//void add(int val){
//    num += val;
//}
//===========================================
//int add(int val);
//int num = 1;
//
//int main(void){
//    int num = 5;
//    printf("num : %d \n", add(3)); //12
//    printf("num : %d \n", num + 9); //14
//    return 0;
//}
//
//int add(int val) {
//    int num = 9;
//    num += val; // num = num + val;
//    return num;
//}
//=============================================

//void func(void){
//    static int num1 = 0;// 지역이지만 전역처럼 사용  //static = 정적 - 지역변수 앞에 static 선언하면
//                                          //1. 함수 영역 안에서만 사용가능.
//    int num2 = 0;                        //2. 전역 변수처럼 프로그램이 종료될때까지 그 값이 살아있다.
//    num1++, num2++;                     //3. 지역 변수이면서 자동 초기화를 한다.
//    printf("static : %d, local : %d\n", num1, num2); //단 1번만 가능.
//}
//
//int main(void) {
//    int i;
//    for(i=0; i<3; i++) {
//        func();
//    }
//        return 0;
//}
//==============================================

//배열
//배열의 길이 값은 상수
//1. 1차원 배열
//2. 2차원 배열
//3. 3차원 배열 ....... n차원 배열

//1. 문자열 배열 내가 표현하고 싶은 배열의 크기는 무조건 한 칸 더 선언 \n을 줘야 하기 떄문에 항상
// hello를 쓰면 arr[6] 5칸이지만 마지막 한 칸을 더 줘야함
//2. 포인터

//int main(void) {
//    int arr[5];
//    //int arr[5] = {10,20,30,40,50}; = int arr[] = {10,20,30,40,50};
//    int sum = 0, i;
//
//    arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//    for(i=0; i <5; i++) {
//        sum += arr[i];
//    }
//    printf("배열의 총 합은 : %d\n", sum);
//    return 0;
//}
//===========================================

//*****************
//int main(void) {
//    int i;
//    int arr1[5] = {1,2,3,4,5}; //20byte
//    int arr2[] = {1,2,3,4,5,6,7}; //28byte
//    int arr3[5] = {1,2}; // 20byte
//    int arr1len, arr2len, arr3len;
//
//    printf("배열 arr1의 크기는 : %d\n", sizeof(arr1));
//    printf("배열 arr2의 크기는 : %d\n", sizeof(arr2));
//    printf("배열 arr3의 크기는 : %d\n", sizeof(arr3));
//
//    arr1len = sizeof(arr1) / sizeof(int);
//    arr2len = sizeof(arr2) / sizeof(int);
//    arr3len = sizeof(arr3) / sizeof(int);
//
//    for(i=0; i<arr1len; i++) {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    for(i=0; i<arr2len; i++) {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
//    for(i=0; i<arr3len; i++) {
//        printf("%d ", arr3[i]);
//    }
//    printf("\n");
//    return 0;
//}
//===========================================
//int main(void) {
//    char ch[] = "Frist C Programming!";
//    printf("배열 ch의 크기는 : %d\n", sizeof(ch));
//    printf("널 문자형 출력 :%c\n", ch[20]);
//    printf("널 문자형 정수출력 : %d\n", ch[20]);
//
//    ch[7] = '-';
//    printf("문자열 출력 : %s \n", ch);
//    return 0;
//}
//============================================
//int main(void) {
//    char ch[] = "test";
//    int len;
//
//    len = strlen(ch);
//
//    printf("문자열 길이는 : %d \n",len);
//    printf("문자열 \"%s\" 길이는 : %d \n",ch, len);
//    return 0;
//}
//=============================================
//int main(void) {
//    char ch[4];
//
//    strcpy(ch, "test");
//
//    printf("문자열 ch의 내용은 : %s \n", ch);
//    return 0;
//}
//=============================================
//int main(void) {
//    char ch[7] = "test";
//    strcat(ch, "ab");
//
//    printf("문자열은 %s\n", ch);
//    return 0;
//}
//=============================================
//표준 입출력 = printf(), scanf()
//파일 입출력 = fprintf(), fscanf()

