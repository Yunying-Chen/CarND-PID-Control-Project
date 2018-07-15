#include "PID.h"
#include <iostream>
#include <numeric>
using namespace std;
using namespace std::chrono;
#include <uWS/uWS.h>
/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) 
{
	p[0] = Kp;
	p[1] = Ki;
	p[2] = Kd;
	
	PID_e[0] = 0.0;  // p_error
	PID_e[1] = 0.0;   // i_error
	PID_e[2] = 0.0;   // d_error
	
	pre_cte = 0.0;
	

}

void PID::UpdateError(double cte) {
	
	if (pre_cte==0) pre_cte=cte;
	
	PID_e[0] = cte;
	PID_e[1] +=cte;
	PID_e[2] = cte-pre_cte;
	
	pre_cte = cte;
}

double PID::TotalError() {
	return PID_e[0]*p[0]+p[1]*PID_e[1]+p[2]*PID_e[2];
}


	

