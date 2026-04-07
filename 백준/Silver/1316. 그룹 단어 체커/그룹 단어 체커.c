int main() {
    char arr[105] = { 0 };
    int num;
    int check=0;
    (void)scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        (void)scanf("%s", arr);
        int cnt = 1;
        for (int j = 0; j < strlen(arr); j++) {
            if (arr[j] != arr[j + 1]) {
                int temp = j + 1;
                int k = 0;
                for (k; k < temp; k++) {
                    if (arr[k] == arr[temp]) {
                        j = strlen(arr);
                        cnt = 0;
                        break;
                    }
                }
            }
        }
        if (cnt == 1) {
            check++;
        }
    }
        printf("%d", check);
    }