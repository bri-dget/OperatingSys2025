#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_students;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Allocate memory to store scores
    int *scores = (int *)malloc(num_students * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Ask the user to enter scores for all students
    printf("Enter the scores of %d students (out of 100):\n", num_students);
    for (int i = 0; i < num_students; i++) {
        printf("Score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Open a file to write the scores
    FILE *file = fopen("scores.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file. Exiting program.\n");
        free(scores);
        return 1;
    }

    // Write scores to the file in reversed order
    fprintf(file, "Scores in reverse order:\n");
    for (int i = num_students - 1; i >= 0; i--) {
        fprintf(file, "%d\n", scores[i]);
    }

    // Free memory and close file
    free(scores);
    fclose(file);

    printf("Scores have been written to 'scores.txt' in reverse order.\n");
    return 0;
}
