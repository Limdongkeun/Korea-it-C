//
//  0119 P2.c
//  Frist C Programming
//
//  Created by 임동근 on 2022/01/20.
//

#include <stdio.h>

//int main(void) {
//    int a, b;
//
//    printf("숫자를 입력하세요");
//    scanf("%d", &a);
//
//    printf("두번째 숫자를 입력하세요");
//    scanf("%d", &b);
//
//    if(a > b){
//        printf("참입니다");
//    }else {
//        printf("거짓");
//    }
//
//    return 0;
//}

//================================
//과제 1 (문구 나오는거 실패)
//int bigger(void) {
//    int a, b;
//
//    printf("첫번째 숫자를 입력해주세요");
//    scanf("%d", &a);
//
//    printf("두번째 숫자를 입력해주세요");
//    scanf("%d", &b);
//
//    if(a > b) {
//        printf("%d", a);
//        scanf("%d", &a);
//    } else if (a < b){
//        printf("%d", b);
//        scanf("%d", &b);
//    }
//    return 0;
//}
//
//int main(void) {
//    int a, b;
//    int result;
//
//    result = bigger();
//    printf("%d와 %d중 큰수는 %d입니다", a, b, result);
//
//    return result;
//}

//==========
// 과제 1
//int bigger(int a, int b) {
//
//    if( a > b){
//        return a;
//    } else {
//        return b;
//    }
//}
//
//int main(void) {
//    int a, b;
//
//    printf("첫번째 숫자 :");
//    scanf("%d", &a);
//
//    printf("두번째 숫자 :");
//    scanf("%d", &b);
//
//    printf("%d와 %d중에서 큰 수는 %d 입니다.", a, b, bigger(a, b));
//
//    return 0;
//
//}

//===================================
//int bigger(void)
//{
//    int a, b;
//    printf("두 개의 정수 입력:");
//    scanf("%d%d", &a, &b);
//    if (a > b)
//    {
//        printf("두 수 중에 큰 수는 %d\n", a);
//    }
//    else
//    {
//        printf("두 수 중에 큰 수는 %d\n", b);
//    }
//    return 0;
//}
//
//int main(void){
//
//    bigger();
//
//    return 0;
//}

//과제 2
//int main() {
//
//    int a, b, c;
//    int min, max;
//
//    printf("세 개의 정수를 입력해주세요 : ");
//
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a >= b) { max = a; min = b; }
//
//    else { max = b; min = a; }
//
//    if (c > max) max = c;
//
//    if (c < min) min = c;
//
//    printf("가장 큰 수는 %d이고,\n", max);
//
//    printf("가장 작은 수는 %d입니다. \n", min);
//
//return 0;
//
//}


