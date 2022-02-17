//
//  0211_2.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/02/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
//파일 입출력 함수
//입력
//1. getch() : 키보드로 입력한 내용을 보여주지 않는다.
//2. getche() : 입력한 내용 모니터를 보여준다. e = echo() = 화면에 보여줘라
//3. getchar() : 사용자가 엔터키를 누르지 않는 동안 입력한 값을 메모리에 저장해 놓고 한 문자만 출력(맨 첫번째자)
//
//
//출력
//1. putchar(문자형 변수) : 문자 하나만 출력
//2. putch(문자형 변수) : 문자 하나만 출력

//int main(void){
//    char ch;
//
//    ch = getch(); // 오직 문자 한자만 입력받는다
////    putch(ch);
//
//    ch = getch(); //내가 입력하는게 화면에 안보인다 , 아무리 많이 입력해도 맨앞에 한글자만 받는다
////    putch(ch); //getch
//
//    ch = getch();
////    putch(ch);
//    return 0;
//
//}

//int main(void){
//    char password[5] = "1234";
//    char input[5];
//    int i;
//    
//    printf("비밀전호 4글자 입력 :");
//    for(i=0;i<4;i++){
//        input[i] = getch();
//    }
//    if(strncmp(password, input, 4)==0){
//        printf("\n통과\n");
//    }else {
//        printf("\n불일치\n");
//        
//        for (i=0; i<4; i++) {
//            putch(input[i]);
//            
//            printf(" 가 틀렸음\n");
//        }
//    }
//}
