int main() {
    long long A, B, V;
    (void)scanf("%lld %lld %lld",&A,&B,&V);
    long long goal1=V-A;
    long long assign = A - B;
    int cnt = 0;
    cnt = goal1 / assign;
    if ((goal1 % assign)!=0) {
        cnt++;
    }
    printf("%d", cnt+1);
}