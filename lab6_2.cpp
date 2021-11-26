#include <iostream>
#include <cmath>

using namespace std;
double deg2rad(double x){
    return (x*M_PI)/180;
}
double rad2deg(double y){
    return (y*180/(M_PI));
}
double findXComponent(double q1,double q2, double e1,double e2){
    return q1*cos(e1)+q2*cos(e2);
}
double findYComponent(double q1,double q2, double e1,double e2){
    return q1*sin(e1)+q2*sin(e2);
}
double pythagoras(double resultx, double resulty){
    return (sqrt(pow(resultx,2)+(pow(resulty,2))));
}
void showResult(double result_vec_length,double result_vec_direction){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< "\n";
    cout<< "Length of the resultant vector = " << result_vec_length <<"\n";
    cout<< "Direction of the resultant vector (deg) = " << result_vec_direction <<"\n";
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
