int main() {
	char a = '*';
	int n;
	(void)scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;

}