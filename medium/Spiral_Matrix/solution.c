int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    
    int m = *matrixColSize, n = matrixSize;
    int direction = 1, left = 0, right = m-1, bottom = n-1, top = 0, index = 0;
    
    if (matrixSize == 0 || *matrixColSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    int* result = (int*)malloc((m*n) * sizeof(int));
     while (left <= right && top <= bottom) {

        for (int i = left; i <= right; i++) {
            result[index++] = matrix[top][i];
        }
        top++; 


        for (int i = top; i <= bottom; i++) {
            result[index++] = matrix[i][right];
        }
        right--;


        if (top <= bottom) {
         
            for (int i = right; i >= left; i--) {
                result[index++] = matrix[bottom][i];
            }
            bottom--; 
        }


        if (left <= right) {

            for (int i = bottom; i >= top; i--) {
                result[index++] = matrix[i][left];
            }
            left++; 
        }
    }
    *returnSize = index;
    return result;
}