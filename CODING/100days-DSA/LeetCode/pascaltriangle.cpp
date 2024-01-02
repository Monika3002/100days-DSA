// 118. Pascal's Triangle
// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
// Example 1:
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:
// Input: numRows = 1
// Output: [[1]]
 
 #include<iostream>
    #include<vector>
    using namespace std;
    class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp;

        for (int i = 0; i < numRows; i++) {
            vector<int> v1;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    v1.push_back(1);
                } else {
                    int ins = temp[i - 1][j - 1] + temp[i - 1][j];
                    v1.push_back(ins);
                }
            }
            temp.push_back(v1);
        }
        return temp;
    }
};
int main(){
    int numRows=5;
    Solution s;
    vector<vector<int>> result=s.generate(numRows);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}