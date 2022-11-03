int sum(int arr[], int size){
    int total = 0;

    for (int i=0; i<size; i++){
        total += arr[i];
    }
    
    return total;
}