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
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'pairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int merge(int* arr, int p, int q, int r)
{
    int n1 = q - p + 1, n2 = r - q;
    
    int left[n1], right[n2];
    
    for(int i = 0; i < n1; i++)
        left[i] = arr[p + i];
    for(int i = 0; i < n2; i++)
        right[i] = arr[q + i + 1];
    
    int index1 = 0, index2 = 0, main_index = p;
    
    while(index1 < n1 && index2 < n2)
    {
        if(left[index1] == right[index2])
        {
            arr[main_index++] = left[index1];
            index1++;
            index2++;
        }
        else if(left[index1] < right[index2])
        {
            arr[main_index++] = left[index1++];
        }
        else {
            arr[main_index++] = right[index2++];
        }
    }
    
    while(index1 < n1)
    {
        arr[main_index++] = left[index1++];
    }
    
    while(index2 < n2)
    {
        arr[main_index++] = right[index2++];
    }
    
    return main_index;
}
int mergesort(int* arr, int p, int q)
{
    int last_index = 0;
    if(p < q)
    {
        int r = (p + q) / 2;
        mergesort(arr, p, r);
        mergesort(arr, r+1, q);
        last_index = merge(arr, p, q, r);
    }
    return last_index;
}

int binary_search(int* arr, int left, int right, int key)
{
    if(left < right)
    {
        int mid = (left + right) / 2;
        
        if(arr[mid] == key)
            return 1;
        else if(arr[mid] < key)
            return binary_search(arr, mid + 1, right, key);
        else 
            return binary_search(arr, left, mid - 1, key);
    }
    return 0;
}
int pairs(int k, int arr_count, int* arr) {
    
    if(k == 0) return arr_count;
    
    int last_index = mergesort(arr, 0, arr_count);
    
    int result = 0;
    
    for(int i = 0; i < last_index; i++)
        if(binary_search(arr, i + 1, last_index, arr[i] + k))
            result++;
            
    return result;
    
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** first_multiple_input = split_string(rtrim(readline()));

    int n = parse_int(*(first_multiple_input + 0));

    int k = parse_int(*(first_multiple_input + 1));

    char** arr_temp = split_string(rtrim(readline()));

    int* arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int arr_item = parse_int(*(arr_temp + i));

        *(arr + i) = arr_item;
    }

    int result = pairs(k, n, arr);

    fprintf(fptr, "%d\n", result);

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

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
