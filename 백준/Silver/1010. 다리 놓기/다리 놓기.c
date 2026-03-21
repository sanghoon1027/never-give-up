int main() {
	int n, m,period;
	int result = 0;

	(void)scanf("%d", &period);

	for (int i = 0; i < period; i++) {

		(void)scanf("%d %d", &n, &m);

		int temp = m;

		result = m;

		if (n !=1) {
			for (int i = 1; i < n; i++) {
				result *= (temp - i);
				result /= (i+1);
			}
		}

		printf("%d\n", result);
	}
	return 0;
}