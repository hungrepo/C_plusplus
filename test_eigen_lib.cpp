// Hello world program

#include<iostream>
#include </usr/include/eigen3/Eigen/Core>
using namespace std;
// main function must return an interger
int main() {
	Eigen::MatrixXd matrix(1,4);
	matrix << 1,0,0,0;

        Eigen::Vector4d state;
        state << 2,2,
                   1,1;

	double a = 10;
	Eigen::MatrixXd matrix2(1,1);
        a = matrix.row(0)*state;
	std::cout << matrix << std::endl;
	std::cout << a << std::endl;
		
}
