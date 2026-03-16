int main() {
	int a, b;
	char *c;
	(void)scanf("%d %d", &a, &b);
	if (a > b) {
		c = ">";
	}
	else if (a < b) {
		c = "<";
	}
	else
		c = "==";
	printf("%s",c);

}