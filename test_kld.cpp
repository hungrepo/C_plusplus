// 

#include<iostream>
#include </usr/include/eigen3/Eigen/Eigen>
// main function must return an interger
int main() {
	double est_error;
	double n;
	Eigen::Vector4d x_bar; 
	Eigen::Vector4d x_hat;
	Eigen::Matrix4d Omega;
	Eigen::Matrix4d Omega_bar;
	Eigen::Matrix4d P;

	Omega << 9.58434737547604,	4.91248696496606,	4.29590852876777,	3.22974675912908,
			 4.91248696496606,	5.22579600641128,	2.02065213724577,	2.11062000441034,
			 4.29590852876777,	2.02065213724577,	2.10294499318739,	1.45981829585316,
			 3.22974675912908,	2.11062000441034,	1.45981829585316,	1.25118242797242;

	Omega_bar << 23.8646128002880,	20.3305605686142,	19.4179280736125,	15.3085523697185,
			     21.6183104485884,	15.1747681473509,	20.1776674597993,	16.5877921909883,
				 31.2212597050611,	17.3649679213067,	30.4403738109261,	24.8901936513173,
				 15.3694774391155,	5.27344524651187,	15.6169760410663,	13.3938704773693;

	P = Omega.inverse();

	x_bar << 10, 10, 0.2, 0.2;
	x_hat << 30, 20, 0.1, 0.4;
	

	n = 4;	
	est_error = (Omega_bar*P).trace()+
	            (x_bar - x_hat).transpose()*Omega_bar*(x_bar - x_hat)
				+ std::log(Omega.determinant()/Omega_bar.determinant())- n;

		std::cout << est_error << std::endl;


}
