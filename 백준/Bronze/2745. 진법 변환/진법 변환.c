int main() {
	unsigned int result=0;

	unsigned int B;
	unsigned int weight = 1;
	char n[100] = { 0 };
	
	(void)scanf("%s %d", n, &B);
	int len = strlen(n);
	for (int i = 0; i < len; i++) {
		if ((n[i] >= 'A') && (n[i] <= 'Z')) {
			if (n[i] == 'A') {
				n[i] = 10;
			}
			else {
				n[i] = 10 + (n[i] - 'A');
			}
		}
		else if (!((n[i] >= 'A') && (n[i] <= 'Z'))) {
			n[i] -= '0';
		}
		
	}
	for (int i = 0; i <len; i++) {
		result += n[len-1-i] * weight;
		weight *= B;
	}

	printf("%u", result);

	return 0;
}