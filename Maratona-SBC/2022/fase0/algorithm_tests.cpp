#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
 
int main() {
    int N;
    double grade;
    string name;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++) {
        getline(cin,name);
        vector<float> values;
        while (cin>>grade) {
            values.push_back(grade);
            if (cin.get() == '\n') {
                break; // Exit the loop if newline character is encountered
            }

        }
        sort(values.begin(), values.end(), greater<float>());
        double final_grade;
        if(values.size() == 1) {
            final_grade = (values[0])/2;
        }

        if(values.size() == 2) {
            final_grade = (values[0] + values[1])/2;
        }
        if(values.size() >= 3) {
            final_grade = (values[0] + values[1] + values[2])/3;
        }
        cout<<fixed;
        cout<<setprecision(1);
        cout<<name<<": "<<final_grade<<endl;
        
    }
    return 0;
}