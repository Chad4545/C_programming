/*x,y 값을 입력받아서 알맞은 사분면을 출력
 ? 연산자를 이용 */

 #include <stdio.h>

 int main(void){

     int x,y,answer;

     printf("x와 y를 입력하시오. ");
     scanf("%d %d", &x, &y);
     printf("(%d, %d)는 %d사분면에 위치합니다.",x,y, (x>0)? ((y>0)?1:4):((y<0)?3:2));

 }