int solve(vector<int>& arr) {
    int arsize = arr.size();
    int mid = (arsize-1) / 2;

    int low = 0, high = arsize-1;
    while(low < high && mid != low && mid != high)
    {
        if(arr[mid] > arr[low])
            low = mid;
        else if(arr[mid] < arr[low])
            high = mid -1;
        mid = (low + high) / 2;
    }

    return max(arr[mid], arr[high]);
}