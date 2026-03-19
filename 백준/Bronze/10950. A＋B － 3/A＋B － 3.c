int main() {
	int a, b, k;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}