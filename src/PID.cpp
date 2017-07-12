#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd)  {
	Kp = kp;
	Kd = kd;
	Ki = ki;
	p_error = 0;
	i_error = 0;
	d_error = 0;

}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;

}
double PID::TotalError() {
	double total_error = Kp * p_error + Ki * i_error + Kd * d_error;
	return total_error;
}

