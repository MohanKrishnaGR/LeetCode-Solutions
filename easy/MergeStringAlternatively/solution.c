

char* mergeAlternately(char* word1, char* word2) {

    int n1, n2, min;
    n1 = strlen(word1);
    n2 = strlen(word2);

    char* result = (char*)malloc((n1 + n2 + 1) * sizeof(char));

    int i = 0, j = 0, k = 0;
    while ((i < n1) && (j < n2)) {
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }

    while (i < n1) {
        result[k++] = word1[i++];
    }

    while (j < n2) {
        result[k++] = word2[j++];
    }

    result[k] = '\0';
    return result;
}