#include <stdio.h>
#include <string.h>

typedef struct {
    char studentId[10];
    char name[20];
    int grade;
    char major[30];
} Student;

int main() {
    Student *s = malloc(sizeof(Student));
    strcpy(s->studentId, "20011230");
    strcpy(s->name, "허선영");
    s->grade = 2;
    strcpy(s->major, "컴퓨터공학과");

    printf("학번: %s \n", s->studentId);
    printf("이름: %s \n", s->name);
    printf("학년: %d \n", s->grade);
    printf("전공: %s \n", s->major);
}