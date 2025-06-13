 #include<iostream> 
 using namespace std;
 int main(){
    int num = 5;
    for(int i = 1; i <= 2*num -1; i++){
        int stars = i;
        if(i > num) stars = 2*num - i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
 }