// Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times.

// You may assume that the array is non-empty and the majority element always exist in the array.


// Problem Constraints
// 1 <= |A| <= 106
// 1 <= Ai <= 109


// Input Format
// The first argument is an integer array A.


// Output Format
// Return the majority element.


// Example Input
// A = [2, 1, 2]


// Example Output
// 2


// Example Explanation
// 2 occurs 2 times which is greater than 3/2.

int Solution::majorityElement(const vector<int> &A) {
    int ans=A[0];
    int size=A.size(), cnt=0;
    for(int i=0;i<size;i++){
        if(ans == A[i]){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt == 0){
            ans=A[i];
            cnt=1;
        }
    }
    return ans;
    // int size=A.size();
    // map<int, int> mp;
    // for(int val : A){
    //     mp[val]++;
    //     if(mp[val]>size/2)return val;
    // }
    // return A[size/2];
}