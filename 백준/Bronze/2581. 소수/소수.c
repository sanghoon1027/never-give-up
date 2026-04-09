#include<math.h>
int main() {
    int m, n,sum,root,min;
    sum = 0;
    min = 10000;
    int cnt = 0;
    int check = 0;
    (void)scanf("%d %d", &m, &n);
    
    for(int i=m;i<=n;i++){
        root = (int)sqrt(i);
        if (i == 1) {
            continue;
        }
        else if (i == 2 || i == 3) {
            cnt++;    
        }
        else if ((i!=2)&&(i!=3)) {
            for (int j = 2; j <= root; j++) {
                if (i % j == 0) {
                    cnt = 0;
                    break;
                }
                else cnt++;
            }
        }
        if (cnt != 0) {
            (min > i) ? (min = i) : min;
            check++;
            sum += i;
        }
        cnt = 0;
    }
    if (check == 0) {
        printf("-1");
        return 0;
    }
    printf("%d\n", sum);
    printf("%d", min);
}