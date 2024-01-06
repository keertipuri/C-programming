//program for reading and writing the student marks data to files
#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function declarations
void writeStudentDataToFile(struct Student students[], int numStudents, const char *fileName);
void readStudentDataFromFile(struct Student students[], int *numStudents, const char *fileName);

int main() {
    int numStudents;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Declare an array of structures for students
    struct Student students[numStudents];

    // Input information for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Write student data to a file
    writeStudentDataToFile(students, numStudents, "student_data.txt");

    // Read student data from the file
    printf("\nReading student data from the file:\n");
    readStudentDataFromFile(students, &numStudents, "student_data.txt");

    // Display information for each student after reading from the file
    printf("\nDisplaying details for each student after reading from the file:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

// Function to write student data to a file
void writeStudentDataToFile(struct Student students[], int numStudents, const char *fileName) {
    FILE *file = fopen(fileName, "w");

    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        exit(1); // Exit with an error code
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    fclose(file);
}

// Function to read student data from a file
void readStudentDataFromFile(struct Student students[], int *numStudents, const char *fileName) {
    FILE *file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        exit(1); // Exit with an error code
    }

    *numStudents = 0; // Initialize the number of students

    while (fscanf(file, "%s %d %f", students[*numStudents].name, &students[*numStudents].rollNumber, &students[*numStudents].marks) != EOF) {
        (*numStudents)++;
    }

    fclose(file);
}
