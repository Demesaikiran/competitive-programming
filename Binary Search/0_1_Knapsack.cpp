int solve(vector<int>& weights, vector<int>& values, int capacity) {
    vector<vector<int>> k(weights.size() + 1, vector<int>(capacity + 1));

    for (int i = 0; i <= weights.size(); i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 or w == 0)
                k[i][w] = 0;
            else if (weights[i - 1] <= w)
                k[i][w] = max(values[i - 1] + k[i - 1][w - weights[i - 1]], k[i - 1][w]);
            else
                k[i][w] = k[i - 1][w];
        }
    }

    return k[weights.size()][capacity];
}