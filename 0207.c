//
//  0207.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/02/07.
//

#include <stdio.h>
#include <stdlib.h> // 임시
//#include <malloc.h> //메모리 관련 함수를 사용할 때
//포인터 고급 중요

//int aa[3]; 길이가 3이고 aa는 변수가 아니라 메모리 주소값 그 자체를 의미
//포인터 변수 : 주소를 담는 그릇(변수)
//포인터 변수 : 선언 *을 선언함
//포인터 변수에는 주소만 대입 가능하다 이때 &를 붙인다.
//메모리 할당 1. 정적메모리, 2. 동적메모리
// 메모리 반환 : free()
//동적메모리 - malloc()-초기화하지 않고 선언 (확보)/ calloc()-초기화를 시키면서 선언
//포인터 변수 = (포인터 변수의 데이터 형*)malloc(포인터 변수 데이터형의 크기 *(곱하기) 필요한 크기)
//p = (int*)malloc(4 * 10); /  p = (int*)malloc(sizeof(int) * 10);
//항상 헤더파일을 사용하겠다고 선언 해야함 - #include <malloc.h>

//정적 메모리
//int main(void){
//    int aa[3];//메모리를 한 번 선언하면 끝이다 - 정적 메모리
//    int *p;
//    int i, hap = 0;
//
//    for(i=0;i<3;i++){
//        printf("%d 번째 숫자 :", i+1);
//        scanf("%d", &aa[i]);
//    }
//
//    p = aa;
//    for(i=0;i<3;i++){
//        hap = hap + *(p+i);
//    }
//    printf("입력 숫자의 합은 : %d\n", hap);
//    return 0;
//}
//------------------------------
//int main(void){
//    int aa[1000];
//    int *p;
//    int i, hap = 0;
//    int cnt;
//
//    printf("입력할 갯수는 :");
//    scanf("%d", &cnt);//압력할 숫자의 갯수
//
//    for(i=0;i<cnt;i++){
//        printf("%d 번째 숫지 :", i+1);
//        scanf("%d", &aa[i]);
//    }
//    p = aa;
//    for(i=0;i<cnt;i++){
//        hap = hap + *(p+i);
//    }
//    printf("입력한 숫자의 합은 : %d\n", hap);
//
//}
//-----------------------
//동적 메모리 (초기화x 그래서 초기화를 시켜줘야함)- 처음에 배열을 선언할 필요가 없다
//int main(void){
//    int *p;
//    int i, hap = 0;
//    int cnt;
//
//    printf("입력할 갯수는 :");
//    scanf("%d", &cnt);
//
//    p = (int*)malloc(sizeof(int) * cnt);// 입력한 갯수만큼 메모리 확보
//    for(i=0;i<cnt;i++){
//        printf("%d 번째 숫자 :", i+1);
//        scanf("%d", p + i);
//    }
//    for(i=0;i<cnt;i++){
//        hap = hap + *(p+i);
//    }
//    printf("입력힌 숫자의 합은 : %d", hap);
//    return 0;
//}
//--------------------
//동적 메모리(초기화o)
//int main(void){
//    int *p, *s;
//    int i, j;
//    
//    printf("malloc() 함수 사용\n");
//    p = (int*)malloc(sizeof(int)*3);
//    
//    for(i=0;i<3;i++){
//        printf("할당된 메모리 초기값은 p[%d] = %d \n", i, p[i]);
//    }
//    free(p);
//    
//    printf("calloc() 함수 사용\n");
//    s = (int*)calloc(sizeof(int),3); //calloc(크기 , 개수)
//    
//    for(j=0;j<3;j++){
//        printf("할당된 메모리 초기값은 s[%d] = %d \n", j, s[j]);
//    }
//    free(s);
//    
//}
