// e969. 大吃大喝 (Big eater)

#include<iostream>
using namespace std;

int main(){
    int m, t, n;
    string food;
    while (cin >> m >> t >> n){
        for (int i = 1; ; i++){
            if (n % 2 != 0){
                food = "drinks a Corn soup";
                n++;
            }else if (n % 2 == 0){
                food = "eats an Apple pie";
                n++;
            }

            // 錢不足
            if (food == "eats an Apple pie" && m < 32){
                cout << "Wayne can't eat and drink." << endl;
                break;
            }else if (food == "drinks a Corn soup" && m < 55){
                cout << "Wayne can't eat and drink." << endl;
                break;
            }

            // 錢足夠
            if (food == "eats an Apple pie" && m >= 32){
                m -= 32;
                if (m == 0)
                    cout << t * (i - 1) << ": Wayne " << food << ", and now he doesn't have money." << endl;
                else if (m == 1)
                    cout << t * (i - 1) << ": Wayne " << food << ", and now he has " << m << " dollar." << endl;
                else 
                    cout << t * (i - 1) << ": Wayne " << food << ", and now he has " << m << " dollars." << endl;
            }else if (food == "drinks a Corn soup" && m >= 55){
                m -= 55;
                if (m == 0)
                    cout << t * (i - 1) << ": Wayne " << food << ", and now he doesn't have money." << endl;
                else if (m == 1)
                    cout << t * (i - 1) << ": Wayne " << food << ", and now he has " << m << " dollar." << endl;    
                else 
                    cout << t * (i - 1) << ": Wayne " << food << ", and now he has " << m << " dollars." << endl;
            }

            if (food == "eats an Apple pie" && m < 55){
                break;
            }else if (food == "drinks a Corn soup" && m < 32){
                break;
            }
        }
    }
}
