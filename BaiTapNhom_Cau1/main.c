#include <math.h>
#include <stdio.h>

int main(void){
    int number,i, count, primeCount = 0;
    printf("100 số nguyên tố đầu tiên mà thầy Hùng thích là: \n");
    for (number = 2; primeCount < 100; number++) {
        count = 0;
        for (i = 2; i < sqrt(number); i++) {
            if (number%i==0)
                count++;
        }
        if (count == 0) {
            printf(" %d ",number);
            primeCount++;
        }
    }
}