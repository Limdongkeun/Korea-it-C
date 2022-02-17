//
//  0128.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/01/28.
//

#include <stdio.h>
#include <string.h>

//맥은 안됀
//입출력 함수
//1. 표준 입출력(scanf(), printf() )
//2. 파일 입출력(fscanf(), fgets(), fgetc()
                //(fprintf(), fputs(), fputc())
//파일 입출력 4단계
//-1단계 파일 포인터 선언
//FILE *변수 이름;
//
//-2단계 : fopen() 파일 열기
//변수 이름 = fopen("파일 이름", "모드"); / 변수이름 = fopen("data.txt", "w");
//
//-3단계: 모드1 : 읽기(r), 모드2: 쓰기(w), 모드3: 붙이기(a)
//
//-4단계: fclose(파일 포인터 변수);
//
//파일의 문자열 읽어오기 : fgets()
                    //fgets(문자열 배열, 읽을 최대 문자열 수(문자형 배열의 길이값), 파일 포인터)
// 공백을 받는 함수 gets()
// 내가 입력한 글을 파일에 넣어야하는 것 fputs()

//int main(void){
//    //파일에 문자를 쓰는것
//    char s[24]; //문자열 배열 선언
//    FILE *wfp; //파일 포인터 변수
//
//    wfp = fopen("c://text//data.txt", "w");
//    printf("문자열을 입력해 주세요");
//    gets(s);
//    fputs(s, wfp);
//    fclose(wfp);
//    return 0;
//}

//파일 읽어오는 것
//int main(void){
//    char s[30];
//    FILE *rfp;
//    rfp = fopen("c://text//data.1txt", "r");
//    fgets(s, 30, rfp);
//    printf("읽어올 문자열은 :");
//    puts(s); //화면에 출력
//    fclose(rfp);
//    return 0;
//}

//파일을 읽어오기 위해 for문의 무한루프 사용
//int main(void){
//    char str[250];
//    FILE *rfp;
//    rfp = fopen("c://text//win.ini", "r");
//    for(;  ;  ){
//        fgets(str, 250, rfp);
//        if (feof(rfp))
//            break;
//
//        printf("%s", str);
//    }
//    fclose(rfp);
//    return 0;
//}
//파일에 있는 숫자를 읽어서 더한 후 출력
//int main(void){
//    FILE *rfp;
//    int hap = 0;
//    int i,in;
//    rfp = fopen("c://tsxt//data2", "r");
//    for(i =0; i<5; i++){
//        fscanf(rfp, "%d", &in);
//        hap = hap + in;
//    }
//    printf("합은 : %d\n", hap);
//    fclose(rfp);
//    return 0;
//}
//파일을 읽은 후 복사하여 다른 파일에 저장
//int main(void){
//    char str[250];
//    FILE *rfp;
//    FILE *wfp;
//
//    rfp = fopen("c://text//win.ini", "r");
//    wfp = fopen("c://text//data3.txt", "w");
//
//    for(;  ;  ){
//        fgets(str, 250, rfp);
//        if(feof(rfp))
//            break;
//
//        fputs(str, wfp);
//    }
//    fclose(rfp);
//    fclose(wfp);
//    return 0;
//}
//사용자가 숫자를 적은 후 합이 파일에 저장
//int maint(void){
//    FILE *wfp;
//    int hap = 0;
//    int in, i;
//
//    wfp = fopen("c://text//data.4", "w");
//
//    for(i=0;i<5;i++){
//        printf("숫자 %d :",i + 1);
//        scanf("%d", &in);
//        hap = hap + in;
//    }
//    fprintf(wfp, "합계는 : %d\n", hap); //합을 파일에 쓴다
//
//    fclose(wfp);
//    return 0;
//}


//int main(void){
//    char s[150];
//    int count, i;
//    char *p;
//
//    printf("문자열을 입력해 주세요 :");
//    scanf("%s", s);
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
