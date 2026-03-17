int main() {
	int hour, min,total_time;
	(void)scanf("%d %d", &hour, &min);
	if (hour == 0) {
		hour = 24;
	}
	total_time = ((hour * 60) + min)-45;
	hour = total_time / 60;
	min = total_time % 60;
	if (hour == 24) {
		hour = 0;
	}
	printf("%d %d", hour, min);
	return 0;
}