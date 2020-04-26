#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2){
    int dp[text1.length()+1][text2.length()+1];
    int l_1 = text1.length();
    int l_2 = text2.length();
    for(int i = 0; i <= l_1; i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j <= l_2; j++){
        dp[0][j] = 0;
    }
    for(int i = 1; i <= l_1; i++){
        for(int j = 1; j <= l_2; j++){
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[l_1][l_2];
}

//int longestCommonSubsequence(string text1, string text2){
//    int dp[text1.length()][text2.length()];
//    for(int i = 0; i < (int)text1.length(); i++){
//        for(int j = 0; j < (int)text2.length(); j++){
//            if(text1[i] == text2[j]){
//                if(i == 0 || j == 0){
//                    dp[i][j] = 1;
//                }else{
//                    dp[i][j] = dp[i-1][j-1] + 1;
//                }
//            }else{
//                if(i == 0 && j == 0){
//                    dp[i][j] = 0;
//                }else if(i == 0){
//                    dp[i][j] = dp[i][j-1];
//                }else if(j == 0){
//                    dp[i][j] = dp[i-1][j];
//                }else{
//                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//                }
//            }
//        }
//    }
//    return dp[text1.length()-1][text2.length()-1];
//}

int main(){
    std::ios_base::sync_with_stdio(false);
    // 3
    cout << longestCommonSubsequence("axbxc", "abc") << endl;
    // 0
    cout << longestCommonSubsequence("a", "n") << endl;
    // 2
    cout << longestCommonSubsequence("ezupkr", "ubmrapg") << endl;

    return 0;
}

