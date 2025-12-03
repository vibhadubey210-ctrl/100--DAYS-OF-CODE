//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;
    fp = fopen("day41c1.c", "r");   
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
