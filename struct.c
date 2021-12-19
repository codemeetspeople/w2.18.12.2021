#include <stdio.h>

typedef struct {
    char name[10];
    int age;
    char gender;
} Human;

void describe(Human human) {
    printf("%s\n", human.name);
    printf("%d\n", human.age);
    printf("%c\n\n", human.gender);
}

void strCpy(char source[], char destination[]) {
    for ( ; *source != '\0'; source++, destination++ ) {
        *destination = *source;
    }
    *destination = '\0';
}

void changeName(Human *human, char newName[]) {
    strCpy(newName, human->name);
}

int main() {
    Human john = {"john", 34, 'm'};
    Human jane = {"jane", 25, 'f'};

    describe(john);
    changeName(&john, "jack");
    describe(john);

    return 0;
}
