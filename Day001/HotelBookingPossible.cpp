bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());

    int count = 1;
    int n = arrive.size();

    for(int i = 1, j = 0; i < n; ){

        if(arrive[i] >= depart[j]){
            count--;
            j++;
        }else if(arrive[i] < depart[j]){
            count++;
            i++;
        }

        if(count > K)
            return false;
    }

    return count <= K;
}
