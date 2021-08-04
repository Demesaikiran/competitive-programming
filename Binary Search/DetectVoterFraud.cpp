//https://binarysearch.com/problems/Detect-Voter-Fraud

bool solve(vector<vector<int>>& votes) {

    int voteid[votes.size()] = {0};
    int size = votes.size();

    for(int i=0; i< size; i++) {
        
        if(voteid[votes[i][1]] == 1)  return true;
            
        else  voteid[votes[i][1]] += 1;
            
    }

    return false;
    
}