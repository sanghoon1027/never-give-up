
int GetGcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int GetLcm(int a, int b) {
    return (a * b) / GetGcd(a, b);
}
int GetGcd(int n,int m);
int GetLcm(int n,int m);
int main() {
    int q, w;
    (void)scanf("%d %d", &q, &w);
    printf("%d\n",GetGcd(q,w));
    printf("%d",GetLcm(q,w));
}
