#ifndef CAN_DEFINITIONS_0
#define CAN_DEFINITIONS_0

#define CAN_MAIN_LOOP_READ_INTERVAL 50
#define CAN_CHECK_CONNECTION 1500

#define CAN_FRAME_MAX_LENGTH 8

#define CAN_FRAME_NUMBER 0

#define CAN_ID_ECU_UPDATE 	0x123
#define CAN_FRAME_ECU_UPDATE_ENGINE_LOAD 1
#define CAN_FRAME_ECU_UPDATE_RPM_HI 2
#define CAN_FRAME_ECU_UPDATE_RPM_LO 3
#define CAN_FRAME_ECU_UPDATE_COOLANT 4
#define CAN_FRAME_ECU_UPDATE_OIL 5
#define CAN_FRAME_ECU_UPDATE_EGT_HI 6
#define CAN_FRAME_ECU_UPDATE_EGT_LO 7

#define CAN_ID_DPF          0x124
#define CAN_FRAME_DPF_UPDATE_DPF_TEMP_HI 1
#define CAN_FRAME_DPF_UPDATE_DPF_TEMP_LO 2
#define CAN_FRAME_DPF_UPDATE_DPF_PRESSURE_HI 3
#define CAN_FRAME_DPF_UPDATE_DPF_PRESSURE_LO 4
#define CAN_FRAME_DPF_UPDATE_DPF_REGEN 5

#define F_FUEL 0
#define F_COOLANT_TEMP 1
#define F_OIL_TEMP 2
#define F_INTAKE_TEMP 3
#define F_ENGINE_LOAD 4
#define F_RPM 5
#define F_EGT 6
#define F_PRESSURE 7
#define F_VOLTS 8
#define F_DPF_PRESSURE 9
#define F_DPF_TEMP 10
#define F_DPF_REGEN 11
#define F_LAST 12

#endif

