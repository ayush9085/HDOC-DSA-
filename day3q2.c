int missingNum(int arr[], int n) {
    long long expectedSum, actualSum = 0;
    
    long long total = n + 1;
    expectedSum = total * (total + 1) / 2;
    
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    return (int)(expectedSum - actualSum);
}
