#include "dyros_bolt_real_robot/odrive_socketcan_settings.h"

const char ifname_lower[] = "enp1s0f0";
char ifname_lower2[] = "enp1s0f1";
const char ifname_upper[] = "enp1s0f2";
char ifname_upper2[] = "enp1s0f3";

// const int starting_point = ELMO_DOF_UPPER;

const char ODRV_NAME[ODRV_CNT][10] = {
    "ODRV_1", 
    "ODRV_2", 
    "ODRV_3"
    };

//pos[i] = pos_elmo[JointMap[i]]

//pos_elmo[i] = pos[JointMap2[i]]
const int JointMap2[ODRV_DOF] = {
    MODEL::FL_HAA,
    MODEL::FL_HFE,
    MODEL::FL_KFE,
    MODEL::FR_HAA,
    MODEL::FR_HFE,
    MODEL::FR_KFE
    
    };

const double CNT2RAD[ODRV_DOF] =
    {
        CNT_TO_RAD_46, CNT_TO_RAD_46, CNT_TO_RAD_46, CNT_TO_RAD_46, CNT_TO_RAD_46, CNT_TO_RAD_46,
    };

const double EXTCNT2RAD[ODRV_DOF] =
    {
        EXT_CNT_TO_RAD_46, EXT_CNT_TO_RAD_46, EXT_CNT_TO_RAD_46, EXT_CNT_TO_RAD_46, EXT_CNT_TO_RAD_46, EXT_CNT_TO_RAD_46
        };

const double RAD2CNT[ODRV_DOF] =
    {
        RAD_TO_CNT_46, RAD_TO_CNT_46, RAD_TO_CNT_46, RAD_TO_CNT_46, RAD_TO_CNT_46, RAD_TO_CNT_46,
        };

const double EXTRAD2CNT[ODRV_DOF] =
    {
        EXT_RAD_TO_CNT_46, EXT_RAD_TO_CNT_46, EXT_RAD_TO_CNT_46, EXT_RAD_TO_CNT_46, EXT_RAD_TO_CNT_46, EXT_RAD_TO_CNT_46,
        };

// const double NM2CNT[ODRV_DOF] =
//     {         //Elmo 순서
//         95.0, //head
//         95.0,
//         95.0, //wrist
//         95.0,
//         95.0,
//         95.0,
//         15.5, //shoulder3
//         15.5, //arm
//         15.5, //arm
//         15.5, //shoulder3
//         42.0, //Elbow
//         42.0, //Forearm
//         42.0, //Forearm
//         42.0, //Elbow
//         15.5, //shoulder1
//         15.5, //shoulder2
//         15.5, //shoulder2
//         15.5, //shoulder1
//         3.3,  //Waist
//         3.3,
//         3.0, //rightLeg
//         4.3,
//         3.8,
//         3.46,
//         4.5,
//         6.0,
//         3.3, //upperbody
//         3.0, //leftLeg
//         4.3,
//         3.8,
//         3.46,
//         4.5,
//         6.0};

// const int q_ext_mod_elmo_[ODRV_DOF] =
//     {
//         0, 0, 0, 0, 0, 0, 0, 0,
//         0, 0, 0, 0, 0, 0, 0, 0,
//         0, 0, 0, 0,
//         5370, 3942, 5148 - 6, 3234, 7499 - 5, 4288,
//         0,
//         3799, 2522, 735, 8132 + 37, 2127 + 0, 7155 + 0};

// //right -> left
// //right hippitch front -> modval +
// //left knee pitch front -> modval -
// //right ankle pitch up -> modval

// const double joint_velocity_limit[ODRV_DOF] =
//     {20.0, 20.0, 20.0, 20.0, 20.0, 20.0,
//      20.0, 20.0, 20.0, 20.0, 20.0, 20.0,
//      10.0, 10.0, 2.0,
//      6.5, 6.5, 6.5, 6.5, 6.5, 6.5, 6.5, 6.5,
//      6.4, 6.4,
//      6.5, 6.5, 6.5,6.5, 6.5, 6.5, 6.5, 6.5};

// const double joint_upper_limit[ODRV_DOF] =
//     {1.0, 1.6,
//      1.57, 2.094, 2.094, 1.57, 1.92, 3.15, 3.15, 1.92,
//      2.8, 3.15, 3.15, 0.5, 1.54, 3.15, 3.15, 2.09,
//      0.45, 0.6,
//      0.6, 3, 3, 3, 1, 0.664,
//      .6,
//      0.6, 3, 3, 3, 1, 0.664};

// const double joint_lower_limit[ODRV_DOF] =
//     {-1.0, -1.6,
//      -1.57, -2.094, -2.094, -1.57, -1.92, -3.15, -3.15, -1.92,
//      -0.5, -3.15, -3.15, -2.8, -2.09, -3.15, -3.15, -1.54,
//      -0.45, -0.3,
//      -0.6, -3, -1.5, -0.5, -1.4, -0.664,
//      -0.6,
//      -0.6, -3, -1.5, -0.5, -1.4, -0.664};

// const double elmo_axis_direction[ODRV_DOF] =
//     {1, -1, 1, 1, -1, 1,
//      1, 1, 1, 1, -1, 1,
//      1, -1, 1, 1, 1, 1,
//      1, 1, -1, -1, -1, -1,
//      1, 1, 1, 1, -1, 1,
//      1, -1, 1};

// const double elmo_ext_axis_direction[ODRV_DOF] =
//     {1, -1, 1, -1, -1, 1,
//      1, 1, 1, -1, -1, 1,
//      1, -1, 1, 1, 1, 1,
//      1, 1, 1, 1, 1, 1,
//      -1, -1, 1, 1, 1, -1,
//      -1, 1, -1};

// const double upper_homming_minimum_required_length[ODRV_DOF] =
//     {

// };

// const double pos_p_gain[ODRV_DOF] =
//     {2000.0, 5000.0, 4000.0, 3700.0, 3200.0, 3200.0,
//      2000.0, 5000.0, 4000.0, 3700.0, 3200.0, 3200.0,
//      6000.0, 10000.0, 10000.0,
//      400.0, 1000.0, 400.0, 400.0, 400.0, 400.0, 10.0, 10.0,
//      100.0, 100.0,
//      400.0, 1000.0, 400.0, 400.0, 400.0, 400.0, 10.0, 10.0

// };
// const double pos_d_gain[ODRV_DOF] =
//     {15.0, 50.0, 20.0, 25.0, 24.0, 24.0,
//      15.0, 50.0, 20.0, 25.0, 24.0, 24.0,
//      200.0, 100.0, 100.0,
//      10.0, 28.0, 10.0, 10.0, 10.0, 10.0, 1.0, 1.0,
//      3.0, 3.0,
//      10.0, 28.0, 10.0, 10.0, 10.0, 10.0, 1.0, 1.0

// };
