//https://binarysearch.com/problems/Unix-Path-Resolution


vector<string> solve(vector<string>& path) {
    int pathlen = path.size();
    vector<string> result;

    for (int i = 0; i < path.size(); i++) {
        if (path[i] == "..") {
            if (i == 0)
                continue;

            else {
                if (result.empty())
                    continue;
                else
                    result.pop_back();
            }
            continue;
        }

        if (path[i] == ".")
            continue;
        else
            result.push_back(path[i]);
    }
    return result;
}

/*     Same problem with O(1) space complexity but time complexity will increase a bit... */
/*     Here for every erase operation it will set the sapce contiguous so takes O(n) time for every erase operation    */


vector<string> solve(vector<string>& path) {
    int pathlen = path.size();

    for (int i = 0; i < path.size();) {
        if (path[i] == "..") {
            if (i == 0)
                path.erase(path.begin() + i);

            else {
                path.erase(path.begin() + i);
                path.erase(path.begin() + i - 1);
                i--;
            }
            continue;
        }

        if (path[i] == ".")
            path.erase(path.begin() + i);
        else
            i++;
    }
    return path;
}