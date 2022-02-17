//
//  0117.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/01/17.
//

#include <stdio.h>

//산술연산자 + - * / %%

//int main(void) {
//    int a, b = 5, c = 3; //함수에 블럭문안에 있는건 지역변수
//    a = b + c;
//    printf("%d + %d = %d \n", b, c, a);
//
//    a = b - c;
//    printf("%d - %d = %d \n", b, c, a);
//
//    a = b * c;
//    printf("%d * %d = %d \n", b, c, a);
//
//    a = b / c;
//    printf("%d / %d = %d \n", b, c, a);
//    a = b % c; // 나눈 후 나머지 값을 출력 //%% 두개 쓰기
//    printf("%d %% %d = %d \n", b, c, a);
//
//    return 0;
//}

//증감연산자 ---- ++ , --
// ++a : 선 증가 후 연산(1증가) /   --a : 선 감소 후 연산
//a++ ; 선 연산 후 증가

//int main(void) {
//    int a = 10;
//    int b;
//
//    b = a++;
//    printf("%d\n", b); //10
//
//    b = ++a;
//    printf("%d\n", b); //12
//
//    b = a--;
//    printf("%d\n", b); //12
//
//    b = --a;
//    printf("%d\n", b); //10
//
//    return 0;
//
//}

//int main()
//{
//    int num1 = 2;
//    int num2 = 8;
//    int num3;
//    int num4;
//
//    num1++;
//    num3 = --num1;
//
//    --num2;
//    num4 = num2++;
//
//    printf("%d\n", num3);
//    printf("%d\n", num4);
//
//    return 0;
//}

//int main(void) {
//
//    printf("%i\n", 123);
//    printf("%5d\n", 123);
//    printf("%05d\n", 123);
//
//    printf("%f\n", 123.45);
//    printf("%7.1f\n", 123.45);
//    printf("%7.3f\n", 123.45);
//
//    printf("%c\n", 'C'); // '' 문자
//    printf("%s\n", "program"); // "" 문자열
//    printf("%10s\n", "program");
//
//    return 0;
//}


// 조건문
//if(조건문) {
//    참일 때 실행하는 구문;
//}else {
//    거짓일 때 실행하는 구문;
//}

//int main(void) {
//
//    int a = 90;
//
//    if(a < 100) {
//        printf("참 입니다");
//    }
//    else {
//        printf("거짓 입니다");
//    }
//    return 0;
//}

//int main(void) {
//
//    int a;
//    printf("점수를 입력해 주십시오 :");
//    scanf("%d", &a); // &는 주소연산자
//
//    if (a >= 90) {
//        printf("A");
//    } else if( a >= 80) {
//        printf("B");
//    } else if (a >= 70) {
//        printf("C");
//    } else {
//        printf("D");
//    }
//    printf("학점입니다.");
//}

//switch문
//int main(void) {
//
//    int a;
//
//    printf("1 ~ 4까지의 숫자를 입력해 주세요 :");
//    scanf("%d", &a);
//
//    switch(a) {
//        case 1:
//            printf("1번을 선택하셨습니다.");
//            break;
//        case 2:
//            printf("2번을 선택하셨습니다.");
//            break;
//        case 3:
//            printf("3번을 선택하셨습니다.");
//            break;
//        case 4:
//            printf("4번을 선택하셨습니다.");
//            break;
//        default:
//            printf("다시 선택하십시오.");
//    }
//}

//퀴즈 "첫번째 정수를 입력해주세요 :")
    //"계산할 연산자(+, -, *, /)를 입력해주세요 :
    //두번째 정수를 입력해주세요 :"
//int main(void) {
//    int a, b;
//    char ch;
//
//    printf("첫번째 정수를 입력해주세요 :");
//    scanf("%d", &a);
//
//    printf("계산할 연산자(+, -, *, /)를 입력해주세요 :");
//    scanf(" %c", &ch);    //c언어에서 문자열을 받을 때는 " %c" %앞에 한칸 띄어서 null값을 하나 준다 이유는 엔터를 치는 순간 null값을 받기 때문에 미리 null값을 하나 준다.
//
//    printf("두번째 정수를 입력해주세요 :");
//    scanf("%d", &b);
//
//    if (ch == '+') {
//        printf("%d + %d = %d입니다.\n", a, b, a+b);
//    }
//    if (ch == '-') {
//        printf("%d - %d = %d입니다.\n", a, b, a-b);
//    }
//    if (ch == '*') {
//        printf("%d * %d = %d입니다.\n", a, b, a*b);
//    }
//    if (ch == '/') {
//        printf("%d / %d = %d입니다.\n", a, b, a/b);
//    }
//}

//for문
//ex)
//for(초깃값; 조건식: 증가값:)
//for(시작값: 끝 값: 증가값:)
//for(1; 5; ++)
//for(int i = 1; i < 5; i++)

//int main(void) {
//
//    printf("for문을 공부하자\n");
//    printf("for문을 공부하자\n");
//    printf("for문을 공부하자\n");
//    printf("for문을 공부하자\n");
//    printf("for문을 공부하자\n");
//    printf("for문을 공부하자\n");
//    printf("for문을 공부하자\n");
//    return 0;
//}

//int main(void) {
//
//    for(int i = 0; i < 5; i++) {
//    printf("for문을 공부하자\n");
//    }
//    return 0;
//}

//퀴즈
// 정수를 입력해주세요 : 3 --- 구구단 3단이 나오도록

//int main(void) {
//    int i;
//    int dan;
//
//    printf("몇단을 원하십니까?");
//    scanf("%d", &dan);
//
//    for(i = 1; i < 10; i++) {
//        printf("%d * %d = %d\n", dan, i , dan * i);
//    }
//    return 0;
//}

// 2단 ~ 9단
//int main(void) {
//    int i, k;
//
//    for(i = 2; i < 10; i++) {
//        for(k = 1; k < 10; k++){
//            printf("%d * %d = %d\n", i, k, i*k);
//        }
//        printf("\n");
//    }
//}

 //시작값에서 끝값까지 1씩 증가하면서 합
//int main(void) {
//
//    int hap = 0;
//    int i;
//    int num1, num2, num3; // 입력받을 변수
//
//    printf("시작값, 끝 값, 증가값을 입력");
//    scanf("%d %d %d", &num1, &num2, &num3);
//
//    for(i = num1; i <= num2; i = i + num3) {
//        hap = hap + i;
//    }
//    printf("%d에서 %d까지의 %d씩 증가한 값을 합은 : %d\n", num1, num2, num3, hap);
//    return 0;
//}
