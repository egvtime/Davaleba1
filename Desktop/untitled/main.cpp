#include <iostream>
using namespace std;
#include <vector>
#include <math.h>
#include <numbers>

// Davaleba 6

class Robot{
public:
    int rotation;

    Robot(int startingRotation):rotation(startingRotation){
    }

    void checkRotation(){
        if(rotation <= 10){
            rotation += 4;
            checkRotation();
        }
        else if(rotation >= 15){
            rotation -= 4;
            checkRotation();
        }
    }

    void turn(int turn){
        rotation = rotation + turn;
        checkRotation();
    };

    string getRotationText(){
        switch(rotation){
            case 11: return "NORTH";
            case 12: return "WEST";
            case 13: return "SOUTH";
            case 14: return "EAST";
        }
    };
};

int main(){
    int m;
    int N;

    cout<<"enter m and N: ";

    cin >> m;
    cin >> N;

    Robot robot(m);

    robot.turn(N);

    string finalRotation = robot.getRotationText();

    cout<<endl<<finalRotation;

}

// Davaleba 5

// int main() {
//     float money;
//     cin>>money;
//     char command;
//     cin>>command;
//
//     switch(command) {
//         case 'D':
//             cout<< money * 0.39<<endl;
//         break;
//         case 'E':
//             cout<< money * 0.35<<endl;
//             break;
//         case 'P':
//             cout<< money * 0.29<<endl;
//             break;
//     }
//
//     return 0;
// }

// Davaleba 4

// float getB(float A, float c, float x) {
//     return A*A - c*c*c * cos(5*x);
// }
//
// int main() {
//     float x, A, c;
//     cin>>A>>c>>x;
//
//     float B = getB(A, c, x);
//
//     if (B < 1) {
//         cout<<"100"<<endl;
//     }
//     else if (B < 2) {
//         cout<<B*x*x*x + c<<endl;
//     }
//     else {
//         cout<<x+B<<endl;
//     }
//
//     return 0;
// }


// Davaleba 3
//
// int getFinalNumber(int number) {
//     while (number > 10) {
//         number = number%10;
//     }
//     return number;
// }
//
//  bool isPalindrome(int number) {
//      // otxnishna dzalian martivia amitomac vadzneleb
//
//      vector<int> numbers;
//
//      while (number > 10) {
//         numbers.push_back(getFinalNumber(number));
//         number = number/10;
//      }
//     numbers.push_back(getFinalNumber(number));
//
//     for (int i = 0; i < numbers.size() / 2; i++) {
//         if (numbers[i] != numbers[numbers.size() - 1 - i]) {
//             return false;
//         }
//     }
//
//     return true;
// }
//
//  int main() {
//      int a;
//      cin>>a;
//
//      switch (isPalindrome(a)){
//          case 1:
//          cout<<"YES"<<endl;
//              break;
//          case 0:
//          cout<<"NO"<<endl;
//              break;
//      }
//
//      return 0;
//  }

//Davaleba 2
//
// bool isEven(int number) {
//     return (number%2==0);
// }
//
// int main() {
//     int a, b, c;
//     cin>>a>>b>>c;
//
//     switch (isEven(a*b*c)){
//         case 1:
//         cout<<"YES"<<endl;
//             break;
//         case 0:
//         cout<<"NO"<<endl;
//             break;
//     }
//
//     return 0;
// }

// Davaleba 1
//
// bool isPositive(int number) {
//     return number > 0 ;
// }
//
// int main(){
//     int a, b;
//     cin>>a>>b;
//
//     switch (isPositive(a+b)){
//         case 1:
//         cout<<"YES"<<endl;
//             break;
//         case 0:
//         cout<<"NO"<<endl;
//             break;
//     }
//
//     return 0;
// }