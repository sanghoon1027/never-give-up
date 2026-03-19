int main() {
	char a = '*';
	int n;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 1+i; j < n; j++) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}