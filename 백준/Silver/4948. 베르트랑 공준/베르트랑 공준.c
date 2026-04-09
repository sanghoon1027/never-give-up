#include <math.h>
int Count_primenum(int n);

int main() {
    int num;
    int countsum = 0;
    while (1) {
        (void)scanf("%d", &num);
        if (num == 0) break;
        for (int i = num+1; i <= num * 2; i++) {
            countsum += Count_primenum(i);
        }
        printf("%d\n", countsum);
        countsum = 0;
        
    }
}

int Count_primenum(int n) {
    int root = (int)sqrt(n);
    int cnt = 0;
    if (n == 1) {
        return 0;
    }
    if ((n == 2) || (n == 3)) {
        return 1;
    }
    else {
        for (int i = 2; i <= root; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}