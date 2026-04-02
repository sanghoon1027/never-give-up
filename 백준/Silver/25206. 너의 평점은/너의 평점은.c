int main() {
    char name[51] = { '\0' };
    float num = 0;
    float totalnum = 0;
    char grade[3] = { 0 };
    float gradenum = 0;
    float result = 0;
    for (int i = 0; i < 20; i++) {
        (void)scanf("%s %f %s", name, &num, grade);
       
        if (!strcmp(grade, "P")) continue;

        totalnum += num;

        if (!strcmp(grade, "A+")) {
            gradenum = 4.5 * num;
        }
        else if (!strcmp(grade, "A0")) {
            gradenum = 4.0 * num;
        }
        else if (!strcmp(grade, "B+")) {
            gradenum = 3.5 * num;
        }
        else if (!strcmp(grade, "B0")) {
            gradenum = 3.0 * num;
        }
        else if (!strcmp(grade, "C+")) {
            gradenum = 2.5 * num;
        }
        else if (!strcmp(grade, "C0")) {
            gradenum = 2.0 * num;
        }
        else if (!strcmp(grade, "D+")) {
            gradenum = 1.5 * num;
        }
        else if (!strcmp(grade, "D0")) {
            gradenum = 1.0 * num;
        }
        else if (!strcmp(grade, "F")) {
            gradenum = 0 * num;
        }
        result += gradenum;

    }

    printf("%f", result / totalnum);

    return 0;
}