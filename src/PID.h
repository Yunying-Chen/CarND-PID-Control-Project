#ifndef PID_H
#define PID_H
#include <uWS/uWS.h>
using namespace std::chrono;
class PID {
public:
  /*
  * Errors
  */
  double PID_e[3];


  /*
  * Coefficients
  */ 
  double p[3];
  
  double pre_cte;
  

  bool UseTwiddle = false;
  bool retrial = false;
  
  
  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
  

  
};

#endif /* PID_H */
