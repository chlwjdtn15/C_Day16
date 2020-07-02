// 문제 : 구조체 변수에 원본이 들어있는지 참조(주소)가 들어있는지 확인해주세요.

#include <stdio.h>
#include <stdlib.h>
// struct School {


//   char* name;
//   int birth_date;
// };

// void change(struct School* str) {



//   str -> name = "미국초등학교";
//   str -> birth_date = 20180717;


// }


// struct Person {
//   int age;
//   char* name;


// };

int* makeArr() {

  int arr[3];
    
  arr[0] = 100; 
  arr[1] = 200; 
  arr[2] = 300; 

  return arr;
}

int main(void) {

  // int arr[3];

  // struct Person p1;

  // printf("%ld\n", (long)p1.age);
  // printf("%ld\n", (long)p1.name);

  // p1.name = "홍길동";
  // p1.age = 22;

  // printf("%ld\n", (long)p1.age);
  // printf("%ld\n", (long)p1.name);

  // struct Person p2 = p1;
  // printf("%ld\n", (long)p2.age);
  // printf("%ld\n", (long)p2.name);


// 문제 : 구조체 변수의 주소를 이용해서 원본값을 변경하는 함수를 구현해주세요.
// 조건 : 아래와 같이 출력하게 해주세요.


  // struct School s1;
  // s1.name = "한국초등학교";
  // s1.birth_date = 19860404;

  // printf("학교의 이름 : %s\n", s1.name);
  // // 출력 => 학교의 이름 : 한국초등학교
  // printf("학교의 설립일 : %d\n", s1.birth_date);
  // // 출력 => 학교의 설립일 : 19860404

  // change(&s1);

  // printf("학교의 이름 : %s\n", s1.name);
  // // 출력 => 학교의 이름 : 미국초등학교
  // printf("학교의 설립일 : %d\n", s1.birth_date);
  // // 출력 => 학교의 설립일 : 20180717


  int* arr = makeArr();
  printf("arr[0] : %d\n", arr[0]);
  printf("arr[1] : %d\n", arr[1]);
  printf("arr[2] : %d\n", arr[2]);



  return 0;
}