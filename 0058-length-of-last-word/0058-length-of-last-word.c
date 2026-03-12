int lengthOfLastWord(char* s) {
    long long int i, c = 0, k = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 32)
            c = 0;
        else {
            c++;
            k = c;
        }
    }
    return k;
}