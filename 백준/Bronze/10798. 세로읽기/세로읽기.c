int main() {
	char arr[5][16] = { 0 };

	for (int i = 0; i < 5; i++) {
			(void)scanf("%s",arr[i]);
		}

	for (int j = 0; j < 16; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] == '\0') continue;
			printf("%c", arr[i][j]);
		}
	}
	return 0;
}