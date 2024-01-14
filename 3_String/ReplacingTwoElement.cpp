#include <iostream>
using namespace std;

void clockWiseFun(string& clockWise) {
    // int n = clockWise.size();
    // char ch = clockWise[n - 1];

    // for(int i = n - 1; i > 0; i--) {
    //     clockWise[i] = clockWise[i - 1];

    // }

    // clockWise[0] = ch;

    int n = clockWise.size();
    char chn_1 = clockWise[n - 1];
    char chn_2 = clockWise[n - 2];

    for(int i = n - 1; i > 1; i--) {
        clockWise[i] = clockWise[i - 2];

    }

    clockWise[0] = chn_2;
    clockWise[1] = chn_1;

    return;
}

void antiClockWiseFun(string& antiClockWise) {
    // int n = antiClockWise.size();
    // char ch = antiClockWise[0];

    // for(int i = 0; i < n - 1; i++) {
    //     antiClockWise[i] = antiClockWise[i + 1];

    // }

    // antiClockWise[n - 1] = ch;

    int n = antiClockWise.size();
    char chn_1 = antiClockWise[0];
    char chn_2 = antiClockWise[1];

    for(int i = 0; i < n - 2; i++) {
        antiClockWise[i] = antiClockWise[i + 2];

    }

    antiClockWise[n - 1] = chn_2;
    antiClockWise[n - 2] = chn_1;

    return;
}

// void clockWiseAndAntiClockWise(string clockWise, string antiClockWise) {
    
//     // clock wise function
    

//     // anti clock wise function
    

//     return;
// }

bool replacingTwoElement(string str1, string str2) {
    string clockWise = str1;
    string antiClockWise = str1;

    clockWiseFun(clockWise);

    if(clockWise == str2) {
        return true;
    }

    antiClockWiseFun(antiClockWise);
    if(antiClockWise == str2) {
        return true;
    
    }

    return false;
}

int main() {
    string str1 = "amazon";
    string str2 = "onamaz";

    bool ans = replacingTwoElement(str1, str2);

    cout << ans << endl;
    return 0;
}