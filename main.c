// 문제 : 구조체 변수에 원본이 들어있는지 참조(주소)가 들어있는지 확인해주세요.

#include <stdio.h>

struct Person {
  int age;
  char* name;
};


int main(void) {

  int arr[3];
  
  struct Person p1;

  p1.name = "홍길동";
  p1.age = 22;

  struct Person p2 = p1;

  


  

  return 0;
}