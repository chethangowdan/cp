#include <stdio.h>
struct Student {
    int id;
    char name[20];
};
void display(struct Student *s) {
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
}
int main() {
    struct Student s1 = {101, "Anu"};
    display(&s1); // Passing by reference
    return 0;
}
