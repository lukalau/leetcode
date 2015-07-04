int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int flag = 1;
    for (int i = 0; i < digitsSize; i ++)
    {
        if (flag == 1)
        {
            if (*(digits + digitsSize - 1 - i) == 9){
                *(digits + digitsSize - 1 - i) = 0;
            } else {
                *(digits + digitsSize - 1 - i) += 1;
                flag = 0;
            }
        }
    }
    *returnSize = digitsSize + flag;
    int* output = (int *) malloc(*returnSize * sizeof(int));
    output[0] = flag;
    for (int j = flag; j < *returnSize; j ++) {
        output[j] = *(digits + j - flag);
    }
    return output;
}
