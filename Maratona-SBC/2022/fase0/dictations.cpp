#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;

vector<vector<int>> dp;

int custom_min(int a, int b, int c){
    return min(min(a,b),c);
}

int distance(string original, string student, int n, int m) {

    if (dp[n][m] != -1) return dp[n][m];
    if(n==0){
        return m;
    }
    if(m==0){
        return n;
    }

    if(original[n-1] == student[m-1]) {
        return distance(original, student, n-1, m-1);
    }

    return dp[n][m] = 1+custom_min(distance(original, student, n, m-1), // delete
                        distance(original, student, n-1, m), // insert
                        distance(original, student, n-1, m-1)); // replace

}

int main(){
    int N;
    cin>>N;
    string correct_word;
    double student_points[5] = {0, 0, 0, 0, 0};
    for(int i=0; i<N; i++) {
        cin>>correct_word;
        string student_word;
        int student_distances[10];
        int student_distance;
        int student_idx = 0;
        int min_mistakes = 20;
        for(int l=0; l<5; l++) {
            cin>>student_word;
            dp.assign((int) correct_word.size()+2,  vector<int>((int) student_word.size()+2, -1));
            student_distance = distance(correct_word, student_word, correct_word.size(), student_word.size());
            min_mistakes = min(min_mistakes, student_distance);
            student_distances[student_idx] = student_distance;
            student_idx++;
        }
        float sum;
        if (min_mistakes == 0) {
            sum = 1;
        } else{
            sum = 0.5;
        }
        for (int j=0; j<5; j++){
            if(student_distances[j] == min_mistakes) {
                student_points[j]+=sum;
            }
        }
    }

    vector<pair<float, int>> final_points;

    final_points.push_back(make_pair(student_points[0], 1));
    final_points.push_back(make_pair(student_points[1], 2));
    final_points.push_back(make_pair(student_points[2], 3));
    final_points.push_back(make_pair(student_points[3], 4));
    final_points.push_back(make_pair(student_points[4], 5));
    sort(final_points.begin(), final_points.end());
    pair<float, int> best_point = final_points[4];
    int curr = 4;
    vector <int> final_answer;
    while (final_points[curr].first == best_point.first){
        final_answer.push_back(final_points[curr].second);
        curr--;
    }
    cout<<fixed;
    cout<<setprecision(1);
    reverse(final_answer.begin(), final_answer.end());
    cout<<best_point.first<<endl;
    for(int k=0; k<final_answer.size(); k++){
        if(k == (final_answer.size() -1)) {
            cout<<final_answer[k]<<endl;
        }else {
            cout<<final_answer[k]<<" ";
        }
    }

}