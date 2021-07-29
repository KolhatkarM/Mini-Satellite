#ifndef mpu6050
#define mpu6050

#include "Arduino.h"
#include "Wire.h"

class MandarK_Mpu6050
{
  public:
    MandarK_Mpu6050();
    void begin();
    void update();
    float AngleX();
    float AngleY();
    float AccAngleX();
    float AccAngleY();
    float GyroAngleX();
    float GyroAngleY();
    float AccRawX();
    float AccRawY();
    float AccRawZ();
    float GyroRawX();
    float GyroRawY();
    
  private:
    //Gyro Variables
    float elapsedTime, time, timePrev;        //Variables for time control
    int gyro_error=0;                         //We use this variable to only calculate once the gyro data error
    float Gyr_rawX, Gyr_rawY, Gyr_rawZ;     //Here we store the raw data read 
    float Gyro_angle_x, Gyro_angle_y;         //Here we store the angle value obtained with Gyro data
    float Gyro_raw_error_x, Gyro_raw_error_y; //Here we store the initial gyro data error

    //Acc Variables
    int acc_error=0;                         //We use this variable to only calculate once the Acc data error
    float rad_to_deg = 180/3.141592654;      //This value is for pasing from radians to degrees values
    float Acc_rawX, Acc_rawY, Acc_rawZ;    //Here we store the raw data read 
    float Acc_angle_x, Acc_angle_y;          //Here we store the angle value obtained with Acc data
    float Acc_angle_error_x, Acc_angle_error_y; //Here we store the initial Acc data error

    float Total_angle_x, Total_angle_y;
};

#endif
