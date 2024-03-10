#ifndef CAN_DEFINITIONS_0
#define CAN_DEFINITIONS_0

//how many times CAN modules should be initialized in case of error?
#define CAN_RETRIES 4

//engine temperature which is considered as a "cold engine". Above is "normal".
#define TEMP_COLD_ENGINE 45
//minimum RPM for dependencies to operate on
#define RPM_MIN 350 

//time for checking if the "cold" start is allowed (s)
#define CAN_CHECK_COLD_START_CONDITIONS 40

//all values in ms
#define CAN_UPDATE_RECIPIENTS 200
#define CAN_MAIN_LOOP_READ_INTERVAL 50
#define CAN_CHECK_CONNECTION 1500

#define CAN_FRAME_MAX_LENGTH 8

//0 index - same for all frames
#define CAN_FRAME_NUMBER 0

#define CAN_ID_ECU_UPDATE 	0x123
enum {
    CAN_FRAME_ECU_UPDATE_ENGINE_LOAD = 1,
    CAN_FRAME_ECU_UPDATE_VOLTS_HI,
    CAN_FRAME_ECU_UPDATE_VOLTS_LO,
    CAN_FRAME_ECU_UPDATE_COOLANT,
    CAN_FRAME_ECU_UPDATE_OIL,
    CAN_FRAME_ECU_UPDATE_EGT_HI,
    CAN_FRAME_ECU_UPDATE_EGT_LO,
};

#define CAN_ID_DPF          0x124
enum {
    CAN_FRAME_DPF_UPDATE_DPF_TEMP_HI = 1,
    CAN_FRAME_DPF_UPDATE_DPF_TEMP_LO,
    CAN_FRAME_DPF_UPDATE_DPF_PRESSURE_HI,
    CAN_FRAME_DPF_UPDATE_DPF_PRESSURE_LO,
    CAN_FRAME_DPF_UPDATE_DPF_REGEN,
};

#define CAN_ID_LUMENS       0x125
enum {
    CAN_FRAME_LIGHTS_UPDATE_HI = 1,
    CAN_FRAME_LIGHTS_UPDATE_LO,
};

#define CAN_ID_CLOCK_BRIGHTNESS       0x126
enum {
    CAN_FRAME_CLOCK_BRIGHTNESS_UPDATE_HI = 1,
    CAN_FRAME_CLOCK_BRIGHTNESS_UPDATE_LO,
};

#define CAN_ID_RPM 0x127
enum {
    CAN_ID_RPM_UPDATE_HI = 1,
    CAN_ID_RPM_UPDATE_LO,
};

#define CAN_ID_THROTTLE 0x128
enum {
    CAN_ID_THROTTLE_UPDATE_HI = 1,
    CAN_ID_THROTTLE_UPDATE_LO,
};

enum {
    F_FUEL,
    F_COOLANT_TEMP,
    F_OIL_TEMP,
    F_INTAKE_TEMP,
    F_THROTTLE_POS,
    F_RPM,
    F_EGT,
    F_PRESSURE,
    F_VOLTS,
    F_DPF_PRESSURE,
    F_DPF_TEMP,
    F_DPF_REGEN,
    F_CAR_SPEED,
    F_CALCULATED_ENGINE_LOAD,
    F_OIL_PRESSURE,
    F_PRESSURE_PERCENTAGE,
    F_FUEL_TEMP,
    F_OUTSIDE_LUMENS,
    F_CLOCK_BRIGHTNESS,
    F_LAST
};

#endif
