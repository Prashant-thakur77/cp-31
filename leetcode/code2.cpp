#include <iostream>
using namespace std;

int main() {
    double A, B, C, D, E, F, G, H;
    double ACC, T1, T2, X;

    cout << "Enter A B C D E F G H: ";
    cin >> A >> B >> C >> D >> E >> F >> G >> H;

    ACC = B;       
    ACC = ACC * C; 
    ACC = ACC + A; 
    T1 = ACC;      

    ACC = E;        
    ACC = ACC * F; 
    T2 = ACC;     

    ACC = D;       
    ACC = ACC - T2;
    T2 = ACC;     

    ACC = G;       
    ACC = ACC * H;
    ACC = ACC + T2;
    T2 = ACC;     

    ACC = T1;      
    ACC = ACC / T2;
    X = ACC;       
    cout << "Result X = " << X << endl;
    return 0;
}