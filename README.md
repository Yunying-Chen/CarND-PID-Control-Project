# CarND-PID-Control-Project
Using PID to control a vehicle with C++

## Intro            
In this project, a PID controller is implemented in C++ to maneuver the vehicle around the track. The simulator will provide the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle.


## Dependencies                     
cmake >= 3.5
make >= 4.1
gcc/g++ >= 5.4

## Files
* src/PID.cpp —— initializes the PID, calculates proportional, integral as well as derivative errors and calculates the steering angle.
* src/main.cpp —— loads the CTE data and calls the PID functions.


## How to choose P,I,D                  
I tuned the Proportional, Integral, and Derivative coefficients manually. The P component establishes linear relationship with the problem.  When the P component is big, it will cause big fluctuations before it reaches stable, which causes the vehicle running out of the track. The I component establishes linear relationship between the average value of problem over time. If the I component is big, it will reach stable faster but it will accumulate the error and cause overshoot. So I tuned I component into very small. The D component establishes linear relationship with the rate of change of problem. When the D component is big, it will reach stable slower but it have less fluctuations. The value of my PID is [0.22, 0.01, 3.0]
  
  
## Run the code
1. Clone this repo
2. Make a build directory: mkdir build && cd build
3. Compile: cmake .. && make
4. execute: ./pid.


## Performance
Under differenct environments, it might have different result. "sim_result.mp4" is the result running on my own laptop(Win10,64bit) and it works well.
