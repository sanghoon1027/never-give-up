int main() {
	int a, b, c, reward, result;
	scanf("%d %d %d", &a, &b, &c);
	if ((a == b)&& (a==c)) {
		reward = 10000 + (a * 1000);
	}
	else if ((a==b)||(b==c)||(a==c)) {
		if (a == b) {
			reward = 1000 + a * 100;
		}
		else if (a == c) {
			reward = 1000 + a * 100;
		}
		else if (b == c) {
			reward = 1000 + b * 100;
		}
	}
	else
	{
		result = (a > b) ? a : b;
		reward = (result > c) ? result * 100 : c * 100;
	}
	printf("%d",reward);
}