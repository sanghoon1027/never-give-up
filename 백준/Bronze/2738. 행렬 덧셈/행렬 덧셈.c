int main() {
	int r, c;
	(void)scanf("%d %d", &r, &c);
	int arr1[105][105] = { 0 };
	int arr2[105][105] = { 0 };

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			(void)scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			(void)scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	return 0;

}