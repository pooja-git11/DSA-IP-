vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    int n = A.size() - 1;
    while(n >= 0){
        int sum = carry + A[n];
        carry = sum / 10;
        A[n] = sum % 10;
        n--;
    }   

    if(carry)
        A.insert(A.begin() + 0, carry);
    while(A[0] == 0)
        A.erase(A.begin() + 0);
    return A;
}