//
//  0211.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/02/11.
//
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
//친구 전화번호 목록
//1. 연락처 출력
//2. 연락처 등록
//3. 연락처 삭제
//4. 삭제

//내가 한거
//int main(void){
//    struct juso{
//        char name[20];
//        char num[50];
//        int age;
//    };
//
//    //연락처 등록
//    struct juso ju;
//    struct juso *p;
//    p = &ju;
//    int cnt;
//    printf("전화번호 등록수 :");
//    scanf("%d", &cnt);
//
//    p = (struct juso *)malloc(sizeof(struct juso) * cnt);
//    for(int i=0;i<cnt;i++){
//        printf("이름 :");
//        scanf("%s", p[i].name);
//
//        printf("전화번호 :");
//        scanf("%s", p[i].num);
//
//        printf("나이 :");
//        scanf("%d", &p[i].age);
//    }
//
//    printf("번호 목록\n");
//    for(int i=0;i<cnt;i++){
//        printf("이름 : %s, 전화 번호 : %s, 나이 : %d \n", p[i].name, p[i].num, p[i].age);
//    }
//    free(p);
//
//
//}

 //구조체 선언
    struct address{
        char name[25];
        char age[3];
        char phone[15];
    };
void print_menu(void); //함수 선언
    void view_juso(void);
    void add_juso(void);
    void delete_juso(void);

const char *fname = "c://test//juso.txt"; //연락처의 파일명 고정(전역변수로 선언)
    
    //연락처 파일 저장(juso.txt)
    //char *fname = "c://test//juso.txt"

int main(void){
    char select = 0;
    //int cnt;
    printf("\n===== 친구 목록 ======\n");
    
    while (select != '4') {
        print_menu();
        select = getch(); //문자로 입력
        getchar();
//        scanf("%d", &cnt);
        switch(select){
            case '1' :view_juso();
                break;
            case '2' :add_juso();
                break;
            case '3' :delete_juso();
                break;
            case '4' : return 0;
                break;
           
            default: printf("다시");
        }
    }
}
void print_menu(){
    printf("\n");
    printf("1. 연락처 출력\n");
    printf("2. 연락처 등록\n");
    printf("3. 연락처 삭제\n");
    printf("4. 끝내기\n");
}

void view_juso(){
    char str[50] = "";
    FILE *rfp, *wfp;
    int i;
    
    rfp = fopen(fname, "r");
    
    //연락처 파일(juso.txt)이 없다면 파일을 만든다
    if(rfp == NULL){
        wfp = fopen(fname, "w");
        fclose(wfp);
        rfp = fopen(fname, "r");
    }
    
    for (i=1;  ; i++) { //i는 1씩 증가, 무한 루프
        fgets(str, 50, rfp);
        
        if(feof(rfp))
            break;
        printf("%3d : %s", i, str);
    }
    fclose(rfp);
}

void add_juso() {
    struct address adr = {"", "", ""};
    char wstr[50] = "";
    FILE *wfp;
    
    wfp = fopen(fname, "a"); //파일 추가
    printf("이름을 입력 :");
    gets(adr.name);
    printf("나이 :");
    gets(adr.age);
    printf("전화 번호 :");
    gets(adr.phone);
    
    // 이름 나이 전화번호 를 하나도 묶기
    strcat(wstr, adr.name);
    strcat(wstr, "\t");
    strcat(wstr, adr.age);
    strcat(wstr, "\t");
    strcat(wstr, adr.phone);
    strcat(wstr, "\n");
    
    fputs(wstr, wfp); // 파일에 문자열 쓰기
    fclose(wfp);
}
