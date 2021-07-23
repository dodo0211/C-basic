#include <stdio.h>
#include <string.h>

// 학생 구조체 정의
struct Student {
    char studentId[10];
    char name[10];
    int grade;
    char major[30];
};

int main() {
    // 구조체 변수 선언
    struct Student s;

    // 구조체 변수에 접근
    // // 하나씩 값에 대입
    // strcpy(s.studentId, "20011230");
    // strcpy(s.name, "허선영");
    // s.grade = 2;
    // strcpy(s.major, "컴퓨터공학과");

    // 선언과 동시에 정의(초기화) - 변수를 반드시 ^차례대로^ 넣어야 함
    struct Student s = { "20011230", "허선영", 2, "컴퓨터공학과" };

    // 구조체 내용 출력
    printf("학번: %s \n", s.studentId);
    printf("이름: %s \n", s.name);
    printf("학년: %d \n", s.grade);
    printf("전공: %s \n", s.major);
}

///////////////////////////////////////
// 하나의 구조체만 있을 때에는 구조체를 선언과 동시에 정의할 수 있다.
// 이러한 경우에는 전역변수로만 선언

// // 학생 구조체 정의
// struct Student {
//     char studentId[10];
//     char name[10];
//     int grade;
//     char major[30];
// } s;

// int main() {

//     // 구조체 변수에 접근
//     strcpy(s.studentId, "20011230");
//     strcpy(s.name, "허선영");
//     s.grade = 2;
//     strcpy(s.major, "컴퓨터공학과");

//     // 구조체 내용 출력
//     printf("학번: %s \n", s.studentId);
//     printf("이름: %s \n", s.name);
//     printf("학년: %d \n", s.grade);
//     printf("전공: %s \n", s.major);
// }