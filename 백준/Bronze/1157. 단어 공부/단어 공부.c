int main() {
    char word[1000001] = { 0 };
    (void)scanf("%s", word);
    int cnt[26] = { 0 };
    int len = strlen(word);
    int num = 0;
    for (int i = 0; i < len; i++) {
        if (word[i] == 'A' || word[i] == 'a') {
            cnt[0]++;
        }
        else if (word[i] == 'B' || word[i] == 'b') {
            cnt[1]++;
        }
        else if (word[i] == 'C' || word[i] == 'c') {
            cnt[2]++;
        }
        else if (word[i] == 'd' || word[i] == 'D') {
            cnt[3]++;
        }
        else if (word[i] == 'e' || word[i] == 'E') {
            cnt[4]++;
        }
        else if (word[i] == 'f' || word[i] == 'F') {
            cnt[5]++;
        }
        else if (word[i] == 'G' || word[i] == 'g') {
            cnt[6]++;
        }
        else if (word[i] == 'h' || word[i] == 'H') {
            cnt[7]++;
        }
        else if (word[i] == 'i' || word[i] == 'I') {
            cnt[8]++;
        }
        else if (word[i] == 'j' || word[i] == 'J') {
            cnt[9]++;
        }
        else if (word[i] == 'k' || word[i] == 'K') {
            cnt[10]++;
        }
        else if (word[i] == 'L' || word[i] == 'l') {
            cnt[11]++;
        }
        else if (word[i] == 'm' || word[i] == 'M') {
            cnt[12]++;
        }
        else if (word[i] == 'n' || word[i] == 'N') {
            cnt[13]++;
        }
        else if (word[i] == 'o' || word[i] == 'O') {
            cnt[14]++;
        }
        else if (word[i] == 'p' || word[i] == 'P') {
            cnt[15]++;
        }
        else if (word[i] == 'q' || word[i] == 'Q') {
            cnt[16]++;
        }
        else if (word[i] == 'R' || word[i] == 'r') {
            cnt[17]++;
        }
        else if (word[i] == 's' || word[i] == 'S') {
            cnt[18]++;
        }
        else if (word[i] == 't' || word[i] == 'T') {
            cnt[19]++;
        }
        else if (word[i] == 'u' || word[i] == 'U') {
            cnt[20]++;
        }
        else if (word[i] == 'v' || word[i] == 'V') {
            cnt[21]++;
        }
        else if (word[i] == 'w' || word[i] == 'W') {
            cnt[22]++;
        }
        else if (word[i] == 'x' || word[i] == 'X') {
            cnt[23]++;
        }
        else if (word[i] == 'y' || word[i] == 'Y') {
            cnt[24]++;
        }
        else if (word[i] == 'z' || word[i] == 'Z') {
            cnt[25]++;
        }
    }
    int max = cnt[0];

    for (int i = 1; i < 26; i++) {
        (max > cnt[i]) ? max : (max = cnt[i]);
    }
    for (int i = 0; i < 26; i++) {
        if (max == cnt[i]) {
            num++;
      }
    }
    if (num > 1) {
        printf("?");
        return 0;
    }
    for (int i = 0; i < 26; i++) {
        if (max == cnt[i])
        {
            printf("%c", i + 'A');
            return 0;
        }
    }
    return 0;
}