int main() {
	char s[5] = "long";
	int n;
	scanf("%d", &n);
	for (int i = 0; i < (n / 4); i++) {
		printf("%s ", s);
	}
	printf("int");

	return 0;

}