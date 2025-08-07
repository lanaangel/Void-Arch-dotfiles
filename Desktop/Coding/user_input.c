#include <stdio.h>
#include <string.h>

int main () {
    // you CAN leave them empty
    // but that may lead to undefined behavior
    // as a good practice, define them to zero.
    int age = 0;
    float gpa = 0.0f;  // .0f for good practices
    char grade = '\0'; // null terminator
    char name[30] = "";

    // & is the adress operator
    printf ("enter your age: ");
    scanf ("%d", &age);

    printf ("enter your gpa: ");
    scanf ("%f", &gpa);

    getchar();
    printf ("enter your grade: ");
    scanf ("%c", &grade);

    // scanf can NOT read spaces, use fgets
    // fgets = file get string
    getchar();
    printf ("enter your full name: ");
    fgets (name, sizeof(name), stdin);
    // the fgets function reads a whole line
    // of input.
    // it includes the enter key you pressed
    // to submit the previous data,
    // displaying it as a new line charcter \n
    // to fix this, use:
    name[strlen(name) - 1] = '\0'; // <string.h>

    printf("%s\n",name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}
