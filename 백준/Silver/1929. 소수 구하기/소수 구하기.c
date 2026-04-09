#include<math.h>
int Is_primenumber(int a);
void print_primenum(int q);

int main() {
    int m, n;
    (void)scanf("%d %d", &m, &n);
    for (int i = m; m <= n; m++) {
        if (Is_primenumber(m)) {
            print_primenum(m);
        }
    }
    return 0;
}
int Is_primenumber(int a) {
    int root = (int)sqrt(a);
    int flag = 1;
    if (a == 1) {
        flag=0;
    }
    if((a==2)||(a==3)){
        flag=1;
    }
    for (int i = 2; i <= root; i++) {
        flag = 1;
        if (a % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

void print_primenum(int q) {
    if (q) {
        printf("%d\n", q);
    }
    return 0;
}