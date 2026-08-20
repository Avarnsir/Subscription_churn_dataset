#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define COL_WIDTH 20 // Adjust this value to make columns wider or narrower

int main() {
    FILE *file = fopen("ravenstack_feature_usage.csv", "r");
    char buffer[MAX_LINE_LENGTH];
    int line_count = 0;

    if (file == NULL) {
        printf("Error: Could not open file 'ravenstack_feature_usage.csv'\n");
        return 1;
    }

    // Read up to 6 lines (1 header + 5 data rows)
    while (fgets(buffer, MAX_LINE_LENGTH, file) != NULL && line_count < 6) {
        
        // Strip out the newline and carriage return characters at the end of the line
        buffer[strcspn(buffer, "\r\n")] = 0;

        // Split the line by commas
        char *token = strtok(buffer, ",");
        
        // Print each column in the current row
        while (token != NULL) {
            // %-*.*s prints the string left-aligned, padded and truncated to exactly COL_WIDTH characters
            printf("%-*.*s | ", COL_WIDTH, COL_WIDTH, token);
            token = strtok(NULL, ",");
        }
        printf("\n");

        // Print a horizontal divider right after the header (first row)
        if (line_count == 0) {
            for (int i = 0; i < 100; i++) { // Arbitrary length for the divider line
                printf("-");
            }
            printf("\n");
        }

        line_count++;
    }

    fclose(file);
    return 0;

}
