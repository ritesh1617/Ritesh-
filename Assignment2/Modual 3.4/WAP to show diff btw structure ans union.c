#include <stdio.h>
#include <string.h>

// Define a structure for storing information about a person
struct Person {
    char name[50];
    int age;
};

// Define a union for storing information about a car
union CarInfo {
    char make[20];
    int year;
};

int main() {
    // Create an instance of the structure
    struct Person person;
    strcpy(person.name, "John");
    person.age = 30;

    // Create an instance of the union
    union CarInfo car;
    strcpy(car.make, "Toyota");
    car.year = 2020;

    // Access and print structure members
    printf("Person:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n\n", person.age);

    // Access and print union members
    printf("Car:\n");
    printf("Make: %s\n", car.make);
    printf("Year: %d\n\n", car.year);

    // Size of structure and union
    printf("Size of struct Person: %lu bytes\n", sizeof(struct Person));
    printf("Size of union CarInfo: %lu bytes\n", sizeof(union CarInfo));

    return 0;
}
