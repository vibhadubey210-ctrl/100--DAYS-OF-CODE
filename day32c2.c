//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};
    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    if(num<0) num = -num; 

    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num=num/10;
    }
    int maxCount = 0, digit = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }
    printf("Digit that occurs the most: %d (occurs %d times)\n", digit, maxCount);
    return 0;
}
