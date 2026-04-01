int main() {
	char arr[101] = { 0 };
	int start = 0;
	int result=1;
	int size = 0;
	(void)scanf("%s", arr);

	for (int i = 0; arr[i] != '\0'; i++) {
		size++;
	}

	if (size % 2 == 0) {
		for (int i = 0; i < (size/2); i++) {
			if (arr[start + i] != arr[size - 1 - i])
			{
				result = 0;
				break;
			}
		}
	}
	else {
		for (int i = 0; i < size / 2; i++) {
			if (arr[start + i] !=arr[size-1 - i])
			{
				result = 0;
				break;
			}
		}
		
	}
		printf("%d", result);
}