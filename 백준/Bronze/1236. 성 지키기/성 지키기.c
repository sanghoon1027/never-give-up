int main() {
	char castle[52][52] = { 0 };
	int hang[52] = { 0 };
	int yul[52] = { 0 };
	int a, b;
	int cnt_h = 0;
	int cnt_y = 0;
	
	(void)scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++) {
		(void)scanf("%s", castle[i]);
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (castle[i][j] == 'X') {
				hang[i] += 1;
				yul[j] += 1;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		if (hang[i] == 0) {
			cnt_h++;
		}
	}
	for (int i = 0; i < b; i++) {
		if (yul[i] == 0) {
			cnt_y++;
		}
	}

	printf("%d", (cnt_h>= cnt_y)?cnt_h:cnt_y);
}