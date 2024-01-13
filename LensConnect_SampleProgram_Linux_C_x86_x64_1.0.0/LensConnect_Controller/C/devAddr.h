#ifndef _devAddr_h
#define _devAddr_h 1

// Device Address define

#define PROTOCOL_VERSION 0x0000
#define FIRMWARE_VERSION 0x0004
#define LENS_MODEL_NAME  0x0010
#define LENS_REVISION    0x0030
#define LENS_SERIAL_NUM  0x0032
#define LENS_ADDRESS	 0x0034
#define CAPABILITIES     0x0040
#define STATUS1          0x0042
#define STATUS2          0x0044 
#define TEMPERATURE_VAL  0x0046
#define TEMPERATURE_MIN  0x0048
#define TEMPERATURE_MAX  0x004A
#define USER_AREA        0x0054

#define ZOOM_POSITION_VAL    0x1000	// Zoom
#define ZOOM_STOP            0x1004
#define ZOOM_BACKLASH_CANCEL 0x1006
#define ZOOM_INITIALIZE      0x1008
#define ZOOM_INIT_POSITION   0x1010
#define ZOOM_MECH_STEP_MIN   0x1012
#define ZOOM_MECH_STEP_MAX   0x1014
#define ZOOM_POSITION_MIN    0x1016
#define ZOOM_POSITION_MAX    0x1018
#define ZOOM_SPEED_VAL       0x101A
#define ZOOM_SPEED_MIN       0x101C
#define ZOOM_SPEED_MAX       0x101E
#define ZOOM_COUNT_VAL       0x1020
#define ZOOM_COUNT_MAX       0x1024

#define FOCUS_POSITION_VAL    0x2000	// Focus
#define FOCUS_STOP            0x2004
#define FOCUS_BACKLASH_CANCEL 0x2006
#define FOCUS_INITIALIZE      0x2008
#define FOCUS_INIT_POSITION   0x2010
#define FOCUS_MECH_STEP_MIN   0x2012
#define FOCUS_MECH_STEP_MAX   0x2014
#define FOCUS_POSITION_MIN    0x2016
#define FOCUS_POSITION_MAX    0x2018
#define FOCUS_SPEED_VAL       0x201A
#define FOCUS_SPEED_MIN       0x201C
#define FOCUS_SPEED_MAX       0x201E
#define FOCUS_COUNT_VAL       0x2020
#define FOCUS_COUNT_MAX       0x2024

#define IRIS_POSITION_VAL    0x3000	// Iris
#define IRIS_STOP            0x3004
#define IRIS_BACKLASH_CANCEL 0x3006
#define IRIS_INITIALIZE      0x3008
#define IRIS_INIT_POSITION   0x3010
#define IRIS_MECH_STEP_MIN   0x3012
#define IRIS_MECH_STEP_MAX   0x3014
#define IRIS_POSITION_MIN    0x3016
#define IRIS_POSITION_MAX    0x3018
#define IRIS_SPEED_VAL       0x301A
#define IRIS_SPEED_MIN       0x301C
#define IRIS_SPEED_MAX       0x301E
#define IRIS_COUNT_VAL       0x3020
#define IRIS_COUNT_MAX       0x3024

#define OPT_FILTER_POSITION_VAL  0x4000	// Optical
#define OPT_FILTER_INITIALIZE	 0x4008
#define OPT_FILTER_INIT_POSITION 0x4010
#define OPT_FILTER_MECH_STEP_MIN 0x4012
#define OPT_FILTER_MECH_STEP_MAX 0x4014
#define OPT_FILTER_POSITION_MIN  0x4016
#define OPT_FILTER_POSITION_MAX  0x4018
#define OPT_FILTER_COUNT_VAL	 0x4020
#define OPT_FILTER_COUNT_MAX	 0x4024

#define GOTOUPDATE   0xFFAA
#define PROGRAMFILE_UPDATE 0xFF00

#endif // _devAddr_h

