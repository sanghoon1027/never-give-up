#include <stdio.h>
int main() {
	char sentence[1000] = { 0 };

	int count[26] = { 0 };

	while (scanf("%s", sentence) != EOF) {
		for (int i = 0; sentence[i] != '\0'; i++) {
			if (sentence[i] >= 'a' && sentence[i] <= 'z') {
				count[sentence[i] - 'a']++;
			}
		}
	}
	int max = count[0];
	for (int i = 0; i < 26; i++) {
		
		(max > count[i]) ? max : (max = count[i]);
	}
	for (int i = 0; i < 26; i++) {
		if (max == count[i])
			printf("%c", i + 'a');
	}
}