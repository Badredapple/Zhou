#include <iostream>
#include <Eigen/Dense>

using namespace std;

int main()
{   //define a 3X3 matrix and two 3-dimensional
    Eigen::Matrix3d p;
    p << 1,2,3,
         4,5,6,
         7,8,9;
    Eigen::Vector3d r(10,11,12);
    Eigen::Vector3d s(13,14,15);

    cout<< "p*p:\n"<<p*r<<endl;
    cout<<"r^T*p:\n" <<r.transpose()*p<<endl;

    cout<<"r^T*s:\n"<<r.transpose()*s<<endl;

}
