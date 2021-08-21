//https://binarysearch.com/problems/Equivalent-Value-and-Frequency

// Here if you have used only map that is ordered map basically takes more time to sort all those things and we are not bothering about the order of elements use unordered_map


bool solve(vector<int>& nums) {
    unordered_map<int, int> hashtable;
    for (int number : nums) {
        hashtable[number]++;
    }
    for (auto itr : hashtable) {
        if (itr.second == itr.first) return true;
    }
    return false;
}