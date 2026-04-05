int main() {
	unsigned int N, B;
	int cnt = 0;
	int temp=0;
	int temp2 = 0;
	(void)scanf("%u %u", &N, &B);
	char arr[200] = { 0 };
	temp = N;
	temp2 = N;
	while (temp>0) {
		temp= temp/ B;
		cnt++;
	}
	temp = N;
	for (int i = 0; i < cnt; i++) {
		temp2 = temp % B;
		temp = temp / B;
		arr[cnt -1- i] = temp2;
	}
	for (int i = 0; i < cnt ; i++) {
		if ((arr[i] >= 10) && (arr[i] <= 35)) {
			arr[i] = 'A' + (arr[i] - 10);
		}
		else {
			arr[i] = '0' + arr[i];
		}
		
	}
	printf("%s", arr);
}