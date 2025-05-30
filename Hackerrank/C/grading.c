#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int* gradingStudents(int grades_count, int* grades, int* result_count) {
    
int* result = malloc(grades_count * sizeof(int));
for(int i=0; i<grades_count;i++){
     if (grades[i]<38){
      
     }
     else{
        if(grades[i]==94 ||grades[i]==84 || grades[i]==74 || grades[i]==64 || grades[i]== 54 || grades[i]==44){
            grades[i]+=1;
           
        }
        if(grades[i]==99 ||grades[i]==89 || grades[i]==79 || grades[i]==69 || grades[i]== 59 || grades[i]==49 || grades[i]==39){
            grades[i]+=1;
           
        }
        if(grades[i]==98 ||grades[i]==88 || grades[i]==78 || grades[i]==68 || grades[i]== 58 || grades[i]==48 || grades[i]==38){
            grades[i]+=2;
            
        }
        if(grades[i]==93 || grades[i]==83 || grades[i]==73 || grades[i]==63 || grades[i]== 53 || grades[i]==43){
            grades[i]+=2;
            
        }
     }
     result[i]=grades[i];

     *result_count = grades_count; 
}
return result;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int grades_count = parse_int(ltrim(rtrim(readline())));

    int* grades = malloc(grades_count * sizeof(int));

    for (int i = 0; i < grades_count; i++) {
        int grades_item = parse_int(ltrim(rtrim(readline())));

        *(grades + i) = grades_item;
    }

    int result_count;
    int* result = gradingStudents(grades_count, grades, &result_count);

    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%d", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, "\n");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
