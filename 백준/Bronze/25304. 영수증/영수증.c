int main() {
	int total,n,price,result,n2;
	char y[10] = "Yes";
	char o[10] = "No";
	result = 0;
	(void)scanf("%d", &total);
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		(void)scanf("%d %d", &price, &n2);
		result += (price * n2);
	}
	if (result == total) {
		printf("%s",y);
	}
	else
		printf("%s",o);
}