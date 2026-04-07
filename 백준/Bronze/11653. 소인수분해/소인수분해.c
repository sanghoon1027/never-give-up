int main() {
    unsigned int a;
    (void)scanf("%u", &a);
    for (int i = 2; a > 1; i++) {
        i = 2;
        while (a % i != 0)
        {
            i++;
        }
        a = a / i;
        printf("%d\n", i);
    }

}