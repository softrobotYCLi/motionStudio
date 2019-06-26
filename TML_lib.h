#ifndef __TML_LIB_H__
#define __TML_LIB_H__

#if defined(WINDOWS) || defined(WIN32)
#  ifdef _TMLDLL
#    define TML_EXPORT __declspec(dllexport) __stdcall
#  else
#    define TML_EXPORT __declspec(dllimport) __stdcall
#  endif 
#else
#  define TML_EXPORT
#endif

#undef BYTE
#undef WORD
#undef DWORD
#undef BOOL
#if defined(WINDOWS) || defined(WIN32)
	typedef unsigned char BYTE; 
	typedef unsigned short WORD; 
	typedef unsigned long DWORD;
#else
	typedef u_int8_t BYTE; 
	typedef u_int16_t WORD; 
	typedef u_int32_t DWORD;
#endif
typedef int BOOL;
#ifndef FALSE
	#define FALSE	0
#endif
#ifndef TRUE
	#define TRUE	1
#endif

typedef const char* LPCSTR;
typedef char* LPSTR;

//supported CAN protocols
#define PROTOCOL_TMLCAN					0x00 //use TMLCAN protocol (default, 29-bit identifiers)
#define PROTOCOL_TECHNOCAN				0x80 //use TechnoCAN protocol (11-bit identifiers)
#define PR0TOCOL_MASK					0x80 //this bits are used for specifying CAN protocol through nChannelType param of MSK_OpenComm function

/***** supported CAN devices *****************************
CHANNEL_IXXAT_CAN - see http://www.ixxat.com
CHANNEL_SYS_TEC_USBCAN - see www.systec-electronic.com
CHANNEL_ESD_CAN - see http://www.esd-electronics.com
CHANNEL_PEAK_SYS_PCAN_* - see http://www.peak-system.com
CHANNEL_LAWICEL_USBCAN - see http://www.canusb.com
**********************************************************/

/*Constants used as values for 'OpenChannel' parameters*/
#define CHANNEL_RS232                 0
#define CHANNEL_RS485                 1
#define CHANNEL_IXXAT_CAN             2
#define CHANNEL_SYS_TEC_USBCAN        3
#define CHANNEL_PEAK_SYS_PCAN_PCI     4
#define CHANNEL_ESD_CAN               5
#define CHANNEL_PEAK_SYS_PCAN_ISA     6
#define CHANNEL_PEAK_SYS_PCAN_PC104   CHANNEL_PEAK_SYS_PCAN_ISA //Same with PCAN_ISA
#define CHANNEL_PEAK_SYS_PCAN_USB     7
#define CHANNEL_PEAK_SYS_PCAN_DONGLE  8
#define CHANNEL_LAWICEL_USBCAN        9
#define CHANNEL_VIRTUAL_SERIAL        15
#define CHANNEL_XPORT_IP              16

/*Constant used for host ID*/
#define HOST_ID		1

/*Constants used as values for 'Logger' parameters*/
#define LOGGER_SLOW		1
#define LOGGER_FAST		2

/*Constants used as values for 'MoveMoment' parameters*/
#define UPDATE_NONE			-1
#define UPDATE_ON_EVENT		0
#define UPDATE_IMMEDIATE	1

/*Constants used for 'ReferenceType' parameters*/
#define REFERENCE_POSITION		0
#define REFERENCE_SPEED			1
#define REFERENCE_TORQUE		2
#define REFERENCE_VOLTAGE		3


/*Constants used for	EnableSuperposition*/
#define SUPERPOS_DISABLE	-1
#define SUPERPOS_NONE		0
#define SUPERPOS_ENABLE		1

/*Constants used for	PositionType*/
#define ABSOLUTE_POSITION	0
#define RELATIVE_POSITION	1

/*Constants used for	EnableSlave*/
#define SLAVE_NONE						0
#define SLAVE_COMMUNICATION_CHANNEL		1
#define SLAVE_2ND_ENCODER				2

/*Constants used for ReferenceBase*/
#define FROM_MEASURE	0
#define FROM_REFERENCE	1

/*Constants used for DecelerationType*/
#define S_CURVE_SPEED_PROFILE		0
#define TRAPEZOIDAL_SPEED_PROFILE	1

/*Constants used for IOState*/
#define IO_HIGH		1
#define IO_LOW		0

/*Constants used for TransitionType*/
#define TRANSITION_HIGH_TO_LOW		-1
#define TRANSITION_DISABLE			0
#define TRANSITION_LOW_TO_HIGH		1

/*Constants used for IndexType*/
#define INDEX_1		1
#define INDEX_2		2

/*Constants used for LSWType*/
#define LSW_NEGATIVE		-1
#define LSW_POSITIVE		1

/*Constants used for TS_Power; to activate/deactivate teh PWM commands*/
#define POWER_ON		1
#define POWER_OFF		0

/*Constants used as inputs parameters of the I/O functions*/
#define INPUT_0   0
#define INPUT_1   1
#define INPUT_2   2
#define INPUT_3   3
#define INPUT_4   4
#define INPUT_5   5
#define INPUT_6   6
#define INPUT_7   7
#define INPUT_8   8
#define INPUT_9		9
#define INPUT_10	10
#define INPUT_11	11
#define INPUT_12	12
#define INPUT_13	13
#define INPUT_14	14
#define INPUT_15	15
#define INPUT_16	16
#define INPUT_17	17
#define INPUT_18	18
#define INPUT_19	19
#define INPUT_20	20
#define INPUT_21	21
#define INPUT_22	22
#define INPUT_23	23
#define INPUT_24	24
#define INPUT_25	25
#define INPUT_26	26
#define INPUT_27	27
#define INPUT_28	28
#define INPUT_29	29
#define INPUT_30	30
#define INPUT_31	31
#define INPUT_32	32
#define INPUT_33	33
#define INPUT_34	34
#define INPUT_35	35
#define INPUT_36	36
#define INPUT_37	37
#define INPUT_38	38
#define INPUT_39	39

#define OUTPUT_0	0
#define OUTPUT_1	1
#define OUTPUT_2	2
#define OUTPUT_3	3
#define OUTPUT_4	4
#define OUTPUT_5	5
#define OUTPUT_6	6
#define OUTPUT_7	7
#define OUTPUT_8	8
#define OUTPUT_9	9
#define OUTPUT_10	10
#define OUTPUT_11	11
#define OUTPUT_12	12
#define OUTPUT_13	13
#define OUTPUT_14	14
#define OUTPUT_15	15
#define OUTPUT_16	16
#define OUTPUT_17	17
#define OUTPUT_18	18
#define OUTPUT_19	19
#define OUTPUT_20	20
#define OUTPUT_21	21
#define OUTPUT_22	22
#define OUTPUT_23	23
#define OUTPUT_24	24
#define OUTPUT_25	25
#define OUTPUT_26	26
#define OUTPUT_27	27
#define OUTPUT_28	28
#define OUTPUT_29	29
#define OUTPUT_30	30
#define OUTPUT_31	31
#define OUTPUT_32	32
#define OUTPUT_33	33
#define OUTPUT_34	34
#define OUTPUT_35	35
#define OUTPUT_36	36
#define OUTPUT_37	37
#define OUTPUT_38	38
#define OUTPUT_39	39

/*Constants used for the register for function TS_ReadStatus*/
#define REG_MCR		0
#define REG_MSR		1
#define REG_ISR		2
#define REG_SRL		3
#define REG_SRH		4
#define REG_MER		5

/*Constants used to select or set the group*/
#define GROUP_0		0
#define GROUP_1		1
#define GROUP_2		2
#define GROUP_3		3
#define GROUP_4		4
#define GROUP_5		5
#define GROUP_6		6
#define GROUP_7		7
#define GROUP_8		8

/*Special parameter values*/
#define FULL_RANGE	0
#define NO_VARIATION	0

/****************************************************************************
Callback function used by client application for handling unsolicited
messages which this driver receives in unexpected places
****************************************************************************/
#if defined(WINDOWS) || defined(WIN32)
    typedef void (__stdcall *pfnCallbackRecvDriveMsg)(WORD wAxisID, WORD wAddress, long Value);
#else
    typedef void (*pfnCallbackRecvDriveMsg)(WORD wAxisID, WORD wAddress, long Value);
#endif

#ifdef __cplusplus
extern "C" {
#endif

LPCSTR TML_EXPORT TS_GetLastErrorText(void);
/*******************************************************************************************
 Function: Returns a text related to the last occurred error when one of the library functions
           was called.
 Input arguments:
	-
 Output arguments:
	return: A text related to the last occurred error
*******************************************************************************************/

/*******************************************************************/
/*******************Parametrization*********************************/
/*******************************************************************/

int TML_EXPORT TS_LoadSetup(LPCSTR setupPath);
/*******************************************************************************************
 Function: Load setup information from a zip archive or a directory containing setup.cfg and variables.cfg files.
 Input arguments:
	setupPath:		path to the zip archive or directory that contains setup.cfg and variables.cfg of the given setup 
 Output arguments:
	return:		>=0 index of the loaded setup; -1 if error
*******************************************************************************************/

/*******************************************************************/
/******************* Communication channels ************************/
/*******************************************************************/

int TML_EXPORT TS_OpenChannel(LPCSTR pszDevName, BYTE btType, BYTE nHostID, DWORD baudrate);
/*******************************************************************************************
 Function: Open a communication channel.
 Input arguments:
	pszDevName:	communication device name
			RS232, RS485 and CHANNEL_LAWICEL_USBCAN: COM port number or COM port name ("1","2","3"... -> "COM1", "COM2", "COM3"...)
			CHANNEL_IXXAT_CAN: "1" .. "4"
			CHANNEL_SYS_TEC_USBCAN and CHANNEL_ESD_CAN: "0" .. "10"
			CHANNEL_PEAK_SYS_PCAN_PCI: "1" or "2"
			CHANNEL_LAWICEL_USBCAN: "" for the first device found or the serial number of the device
			CHANNEL_XPORT_IP: "IP" or "hostname"
	btType: channel type (CHANNEL_*) with an optional protocol (PROTOCOL_*, default is PROTOCOL_TMLCAN)
	nHostID: Is the address of your PC computer. A value between 1 and 255
			For RS232: axis ID of the drive connected to the PC serial port (usually 255)
			For RS485 or CAN devices: must be an unused axis ID! It is the address of your PC computer on
						the RS485 network.
			For XPORT: "IP:port"
	BaudRate:	Baud rate 
			serial ports: 9600, 19200, 38400, 56000 or 115200
			CAN devices: 125000, 250000, 500000, 1000000
 Output arguments:
	return:		channel's file descriptor or -1 if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SelectChannel(int fd);
/*******************************************************************************************
 Function: Select active communication channel. If you use only one channel there is no need to call this function.
 Input arguments:
	fd: channel file descriptor (-1 means selected communication channel)
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
void TML_EXPORT TS_CloseChannel(int fd = -1);
#else
void TML_EXPORT TS_CloseChannel(int fd);
#endif
/*******************************************************************************************
 Function: Close the communication channel.
 Input arguments:
  fd: channel file descriptor (-1 means selected communication channel)
*******************************************************************************************/

/*******************************************************************/
/*******************Drive Administration ***************************/
/*******************************************************************/

BOOL TML_EXPORT TS_SetupAxis(BYTE axisID, int idxSetup);
/*******************************************************************************************
 Function: Select setup configuration for the drive with axis ID.
 Input arguments:
	axisID:		axis ID. It must be a value between 1 and 255; 
	idxSetup:	Index of previously loaded setup, 
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SelectAxis(BYTE axisID);
/*******************************************************************************************
 Function: Selects the active axis.
 Input arguments:
	axisID:		The ID of the axis to become the active one. It must be a value between 1 and 255; 
					For RS485/CAN communication, this value must be different than nHostID parameter 
					defined at TS_OpenChannel function call.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetupGroup(BYTE groupID, int idxSetup);
/*******************************************************************************************
 Function: Select setup configuration for the drives within group.
 Input arguments:
	groupID:		group ID. It must be a value between 1 and 8; 
	idxSetup:		Index of previously loaded setup, 
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SelectGroup(BYTE groupID);
/*******************************************************************************************
 Function: Selects the active group.
 Input arguments:
	groupID:		The ID of the group of axes to become the active ones. It must be a value 
					between 1 and 8.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetupBroadcast(int idxSetup);
/*******************************************************************************************
 Function: Select setup configuration for all drives on the active channel.
 Input arguments:
	idxSetup:		Index of previously loaded setup, 
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SelectBroadcast(void);
/*******************************************************************************************
 Function: Selects all axis on the active channel. 
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_Reset(void);
/*******************************************************************************************
 Function: Resets selected drives.
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_ResetFault(void);
/*******************************************************************************************
 Function: This function clears most of the errors bits from Motion Error Register (MER).
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_Power(BOOL Enable);
/*******************************************************************************************
 Function: Controls the power stage (ON/OFF).
 Input arguments:
	Enable:		TRUE -> Power ON the drive; FALSE -> Power OFF the drive
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_ReadStatus(short SelIndex, WORD& Status);
#else
BOOL TML_EXPORT TS_ReadStatus(short SelIndex, WORD* Status);
#endif
/*******************************************************************************************
 Function: Returns drive status information.
 Input arguments:
	SelIndex:	
		REG_MCR -> read MCR register
		REG_MSR -> read MSR register
		REG_ISR -> read ISR register 
		REG_SRL -> read SRL register 
		REG_SRH -> read SRH register 
		REG_MER -> read MER register 
 Output arguments:
	Status:	drive status information (value of the selected register)
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_Save(void);
/*******************************************************************************************
 Function: Saves actual values of all the parameters from the drive/motor working memory into 
           the EEPROM setup table.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_UpdateImmediate(void);
/*******************************************************************************************
 Function: Update the motion mode immediately.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_UpdateOnEvent(void);
/*******************************************************************************************
 Function: Update the motion mode on next event occurence.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetPosition(long PosValue);
/*******************************************************************************************
 Function: Set actual position value.
 Input arguments:
	PosValue:	Value at which the position is set
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetCurrent(short CrtValue);
/*******************************************************************************************
 Function: Set actual current value.
 Input arguments:
	CrtValue:	Value at which the motor current is set
					REMARK: this command can be used only for step motor drives
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetTargetPositionToActual(void);
/*******************************************************************************************
 Function: Set the target position value equal to the actual position value.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetIntVariable(LPCSTR pszName, short value);
/*******************************************************************************************
 Function: Writes an integer type variable to the drive.
 Input arguments:
	pszName:	Name of the variable
	value:	Variable value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_GetIntVariable(LPCSTR pszName, short& value);
#else
BOOL TML_EXPORT TS_GetIntVariable(LPCSTR pszName, short* value);
#endif
/*******************************************************************************************
 Function: Reads an integer type variable from the drive.
 Input arguments:
	pszName:	Name of the variable
 Output arguments:
	value:	Variable value
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetLongVariable(LPCSTR pszName, long value);
/*******************************************************************************************
 Function: Writes a long integer type variable to the drive.
 Input arguments:
	pszName:	Name of the variable
	value:	Variable value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_GetLongVariable(LPCSTR pszName, long& value);
#else
BOOL TML_EXPORT TS_GetLongVariable(LPCSTR pszName, long* value);
#endif
/*******************************************************************************************
 Function: Reads a long integer type variable from the drive.
 Input arguments:
	pszName:	Name of the variable
 Output arguments:
	value:	Variable value
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetFixedVariable(LPCSTR pszName, double value);
/*******************************************************************************************
 Function: Writes a fixed point type variable to the drive.
 Input arguments:
	pszName:	Name of the variable
	value:	Variable value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_GetFixedVariable(LPCSTR pszName, double& value);
#else
BOOL TML_EXPORT TS_GetFixedVariable(LPCSTR pszName, double* value);
#endif
/*******************************************************************************************
 Function: Reads a fixed point type variable from the drive.
 Input arguments:
	pszName:	Name of the variable
 Output arguments:
	value:	Variable value
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetBuffer(WORD address, WORD* arrayValues, WORD nSize);
/*******************************************************************************************
 Function: Download a data buffer to the drive's memory. 
 Input arguments:
	address:	Start address where to download the data buffer
	arrayValues:	Buffer containing the data to be downloaded
	nSize: the number of words to download
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_GetBuffer(WORD address, WORD* arrayValues, WORD nSize);
/*******************************************************************************************
 Function: Upload a data buffer from the drive (get it from motion chip's memory). 
 Input arguments:
	address:	Start address where from to upload the data buffer
	arrayValues:	Buffer address where the uploaded data will be stored
	nSize: the number of words to upload
 Output arguments:
	arrayValues:	the uploaded data
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

/*******************************************************************/
/*******************MOTION functions********************************/
/*******************************************************************/

BOOL TML_EXPORT TS_MoveAbsolute(long AbsPosition, double Speed, double Acceleration, short MoveMoment, short ReferenceBase);
/*******************************************************************************************
 Function: Move Absolute with trapezoidal speed profile. This function allows you to program a position profile 
           with a trapezoidal shape of the speed.
 Input arguments:
	AbsPosition: 	Absolute position reference value
	Speed: 		Slew speed; if 0, use previously defined value
	Acceleration: 	Acceleration  decceleration; if 0, use previously defined value
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_MoveRelative(long RelPosition, double Speed, double Acceleration, BOOL IsAdditive, short MoveMoment, short ReferenceBase);
/*******************************************************************************************
 Function: Move Relative with trapezoidal speed profile. This function allows you to program a position profile 
           with a trapezoidal shape of the speed.
 Input arguments:
	RelPosition: 	Relative position reference value
	Speed: 		Slew speed; if 0, use previously defined value
	Acceleration: 	Acceleration  decceleration; if 0, use previously defined value
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	IsAdditive:
		TRUE -> Add the position increment to the position to reach set by the previous motion command
		FALSE -> No position increment is added to the target position
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_MoveVelocity(double Speed, double Acceleration, short MoveMoment, short ReferenceBase);
/*******************************************************************************************
 Function: Move at a given speed, with acceleration profile.
 Input arguments:
	Speed: 		Jogging speed
	Acceleration: 	Acceleration  decceleration; if 0, use previously defined value
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetAnalogueMoveExternal (short ReferenceType, BOOL UpdateFast, double LimitVariation, short MoveMoment);
/*******************************************************************************************
 Function: Set Motion type as using an analogue external reference. 
 Input arguments:
	ReferenceType:	
		REFERENCE_POSITION -> external position reference
		REFERENCE_SPEED -> external speed reference
		REFERENCE_TORQUE -> external torque reference
		REFERENCE_VOLTAGE -> external voltage reference
	UpdateFast: 	
		TRUE -> generate the torque reference in the fast control loop
		FALSE -> generate the torque reference in the slow control loop
	LimitVariation:
		NO_VARIATION (0) -> the external reference is limited at the value set in the Drive Setup
		A value which can be an acceleration or speed in function of the reference type.
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_SetDigitalMoveExternal (BOOL SetGearRatio = FALSE, short Denominator = 1, short Numerator = 1, double LimitVariation = 0, short MoveMoment = 1);
#else
BOOL TML_EXPORT TS_SetDigitalMoveExternal (BOOL SetGearRatio, short Denominator, short Numerator, double LimitVariation, short MoveMoment);
#endif
/*******************************************************************************************
 Function: Set Motion type as using a digital external reference. This function is used only for Positioning.
 Input arguments:
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	LimitVariation:
		NO_VARIATION (0) -> the external reference is limited at the value set in the Drive Setup
		A value which can be an acceleration or speed in function of the reference type.
	SetGearRatio: Set the gear parameters; if TRUE, following parameters are needed
	Denumerator: Gear master ratio
	Numerator: Gear slave ratio
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_SetOnlineMoveExternal (short ReferenceType, double LimitVariation = 0, double InitialValue = 0., short MoveMoment = 1);
#else
BOOL TML_EXPORT TS_SetOnlineMoveExternal (short ReferenceType, double LimitVariation, double InitialValue,  short MoveMoment);
#endif
/*******************************************************************************************
 Function: Set Motion type as using an analogue external reference.
 Input arguments:
	ReferenceType:	
		REFERENCE_POSITION -> external position reference
		REFERENCE_SPEED -> external speed reference
		REFERENCE_TORQUE -> external torque reference
		REFERENCE_VOLTAGE -> external voltage reference
	LimitVariation:
		NO_VARIATION (0) -> the external reference is limited at the value set in the Drive Setup
		A value which can be an acceleration or speed in function of the reference type.
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	InitialValue: If non zero, set initial value of EREF
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_VoltageTestMode(short MaxVoltage, short IncrVoltage, short Theta0, short Dtheta, short MoveMoment);
/*******************************************************************************************
 Function: Use voltage test mode. 
 Input arguments:
	MaxVoltage:	Maximum test voltage value
	IncrVoltage:	Voltage increment on each slow sampling period
	Theta0:		Initial value of electrical angle value
			Remark: used only for AC motors; set to 0 otherwise
	Dtheta:		Electric angle increment on each slow sampling period
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_TorqueTestMode(short MaxTorque, short IncrTorque, short Theta0, short Dtheta, short MoveMoment);
/*******************************************************************************************
 Function: Use torque test mode.
 Input arguments:
	MaxTorque:	Maximum test torque value
	IncrTorque:	Torque increment on each slow sampling period
	Theta0:		Initial value of electrical angle value
			Remark: used only for AC motors; set to 0 otherwise
	Dtheta:		Electric angle increment on each slow sampling period
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetGearingMaster(BOOL Group, BYTE SlaveID, short ReferenceBase, BOOL Enable, 
				BOOL SetSlavePos, short MoveMoment);
/*******************************************************************************************
 Function: Setup master parameters in gearing mode.
 Input arguments:
	Group
		TRUE -> set slave group ID with value; 
		FALSE-> set slave axis ID with SlaveID value;
	SlaveID:	Axis ID in the case that Group is FALSE or a Group ID when Group is TRUE
	ReferenceBase:	
		FROM_MEASURE -> send position feedback
		FROM_REFERENCE -> send position reference
	Enable:		TRUE -> enable gearing operation; FALSE -> disable gearing operation
	SetSlavePos:	TRUE -> initialize slave(s) with master position
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetGearingSlave(short Denominator, short Numerator, short ReferenceBase, 
								   short EnableSlave, double LimitVariation, short MoveMoment);
/*******************************************************************************************
 Function: Setup slave parameters in gearing mode.
 Input arguments:
	Denominator:	Master gear ratio value
	Numerator:	Slave gear ratio value
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
	EnableSlave:	
		SLAVE_NONE -> do not enable slave operation
		SLAVE_COMMUNICATION_CHANNEL -> enable operation got via a communication channel
		SLAVE_2ND_ENCODER -> enable operation read from 2nd encoder or P&D inputs
	LimitVariation:
		NO_VARIATION (0) -> the external reference is limited at the value set in the Drive Setup
		A value which can be an acceleration or speed in function of the reference type.
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_MotionSuperposition(short Enable, short Update);
/*******************************************************************************************
 Function: enable or disable the superposition of the electronic gearing mode with a second 
			motion mode
 Input arguments:
	Enable:	if 0, disable the Superposition mode
			if 1, enable the Superposition mode
	Update:	if 0, doesn't send UPD command to the drive, in order to take into account the 
			Superposition mode
			if 1, sends UPD command to the drive, in order to take into account the 
			Superposition mode
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetCammingMaster(BOOL Group, BYTE SlaveID, short ReferenceBase, BOOL Enable, short MoveMoment);
/*******************************************************************************************
 Function: Setup master parameters in camming mode.
 Input arguments:
	Group
		TRUE -> set slave group ID with (SlaveID + 256) value; 
		FALSE-> set slave axis ID with SlaveID value;
	SlaveID:	Axis ID in case Group is FALSE, or group mask otherwise (0 means broadcast)
	ReferenceBase:	
		FROM_MEASURE -> send position feedback
		FROM_REFERENCE -> send position reference
	Enable:		TRUE -> enable camming operation; FALSE -> disable camming operation
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_CamDownload(LPCSTR pszCamFile, WORD wLoadAddress, WORD wRunAddress, WORD& wNextLoadAddr, WORD& wNexRunAddr);
#else
BOOL TML_EXPORT TS_CamDownload(LPCSTR pszCamFile, WORD wLoadAddress, WORD wRunAddress, WORD* wNextLoadAddr, WORD* wNexRunAddr);
#endif
/*******************************************************************************************
 Function: Download a CAM file to the drive, at a specified address.
 Input arguments:
	pszCamFile: the name of the file containing the CAM information
	wLoadAddress: memory address where the CAM is loaded 
	wRunAddress: memory where the actual CAM table is transfered and executed at run time
 Output arguments:
	wNextLoadAddr: memory address available for the next CAM file; if 0 there is no memory left
	wNextRunAddress: memory where the next CAM table is transfered and executed at run time;
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_CamInitialization(WORD LoadAddress, WORD RunAddress);
/*******************************************************************************************
 Function:	Copies a CAM file from E2ROM to RAM memory. You should not use this if you download CAMs directly to RAM memory 
				(load address == run address)
 Input arguments:
	LoadAddress: memory address in E2ROM where the CAM is already loaded
 	RunAddress: memory address in RAM where the CAM is copied.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_SetCammingSlaveRelative(WORD RunAddress, short ReferenceBase, short EnableSlave, short MoveMoment,
											  long OffsetFromMaster = 0, double MultInputFactor = 0, double MultOutputFactor = 0);
#else
BOOL TML_EXPORT TS_SetCammingSlaveRelative(WORD RunAddress, short ReferenceBase, short EnableSlave, short MoveMoment,
											  long OffsetFromMaster, double MultInputFactor, double MultOutputFactor);
#endif
/*******************************************************************************************
 Function: Setup slave parameters in relative camming mode.
 Input arguments:
	RunAddress: memory addresses where the CAM is executed at run time. If any of them is 0 it means that no start address is set
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
	EnableSlave:	
		SLAVE_NONE -> do not enable slave operation
		SLAVE_COMMUNICATION_CHANNEL -> enable operation got via a communication channel
		SLAVE_2ND_ENCODER -> enable operation read from 2nd encoder or P&D inputs
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	nOffsetFromMaster, nMultInputFactor, nMultOutputFactor: if non-zero, set the correspondent parameter
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_SetCammingSlaveAbsolute(WORD RunAddress, double LimitVariation, short ReferenceBase, short EnableSlave, short MoveMoment,
											  long OffsetFromMaster = 0, double MultInputFactor = 0, double MultOutputFactor = 0);
#else
BOOL TML_EXPORT TS_SetCammingSlaveAbsolute(WORD RunAddress, double LimitVariation, short ReferenceBase, short EnableSlave, short MoveMoment,
											  long OffsetFromMaster, double MultInputFactor, double MultOutputFactor);
#endif
/*******************************************************************************************
 Function: Setup slave parameters in absolute camming mode.
 Input arguments:
	RunAddress: memory addresses where the CAM is executed at run time. If any of them is 0 it means that no start address is set
	LimitVariation:
		NO_VARIATION (0) -> no limitation on speed value at the value set in the Drive Setup
		A value which can be an acceleration or speed in function of the reference type.
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
	EnableSlave:	
		SLAVE_NONE -> do not enable slave operation
		SLAVE_COMMUNICATION_CHANNEL -> enable operation got via a communication channel
		SLAVE_2ND_ENCODER -> enable operation read from 2nd encoder or P&D inputs
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	nOffsetFromMaster, nMultInputFactor, nMultOutputFactor: if non-zero, set the correspondent parameter
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetMasterResolution(long MasterResolution);
/*******************************************************************************************
 Function: Setup the resolution for the master encoder connected on the second encoder input of the drive.
 Input arguments:
	MasterResolution: 
		FULL_RANGE (0) -> select this option if the master position is not cyclic. (e.g. the resolution is equal with the whole 
								32-bit range of position)
		Value that reprezents the number of lines of the 2nd master encoder
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SendSynchronization (long Period);
/*******************************************************************************************
 Function: Setup drives to send synchronization messages.
 Input arguments:
	Period: the time period between 2 sends
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_Stop(void);
/*******************************************************************************************
 Function: Stop the motion.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_QuickStopDecelerationRate(double Deceleration);
/*******************************************************************************************
 Function: Set the deceleration rate used for QuickStop or SCurve positioning profile.
 Input Argumernts:
 	Deceleration: the value of the deceleration rate
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SendPVTPoint(long Position, double Velocity, unsigned int Time, short PVTCounter);
/*******************************************************************************************
 Function: Sends a PVT point to the drive.
 Input arguments:
   Position:	drive position for the desired point
   Velocity:	desired velocity of the drive at the point
   Time:			amount of time for the segment
   PVTCounter:	integrity counter for current PVT point
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SendPVTFirstPoint(long Position,double Velocity,unsigned int Time, short PVTCounter,
								 short PositionType, long InitialPosition, short MoveMoment, short ReferenceBase);
/*******************************************************************************************
 Function: Sends the first point from a series of PVT points and sets the PVT motion mode.
 Input arguments:
   Position:	drive position for the desired point
   Velocity:	desired velocity of the drive at the point
   Time:			amount of time for the segment
   PVTCounter:	integrity counter for current PVT point
	PositionType: ABSOLUTE_POSITION or RELATIVE_POSITION
   InitialPosition:	drive initial position at the start of an absolute PVT movement.
							It is taken into consideration only if an absolute movement is requested
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_PVTSetup(short ClearBuffer, short IntegrityChecking, short ChangePVTCounter,
						short AbsolutePositionSource, short ChangeLowLevel, short PVTCounterValue, short LowLevelValue);
/*******************************************************************************************
 Function: For PVT motion mode parametrization and setup.
 Input arguments:
   ClearBuffer:	0 -> nothing
						1 -> clears the PVT buffer
   IntegrityChecking:	0 -> PVT integrity counter checking is active (default)
								1 -> PVT integrity counter checking is inactive
   ChangePVTCounter:	0 -> nothing
							1 -> drive internal PVT integrity counter is changed with the value specified PVTCounterValue
   AbsolutePositionSource:	specifies the source for the initial position in case the PVT motion mode will be absolute
							0 -> initial position read from PVTPOS0
							1 -> initial position read from current value of target positio (TPOS)
   ChangeLowLevel:		0 -> nothing
								1 -> the parameter for BufferLow signaling is changed with the value specified LowLevelValue
   PVTCounterValue:	New value for the drive internal PVT integrity counter
   LowLevelValue:		New value for the level of the BufferLow signal
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SendPTPoint(long Position, unsigned int Time, short PTCounter);
/*******************************************************************************************
 Function: Sends a PT point to the drive.
 Input arguments:
   Position:	drive position for the desired point
   Time:		amount of time for the segment
   PTCounter:	integrity counter for current PT point
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SendPTFirstPoint(long Position, unsigned int Time, short PTCounter,
								 short PositionType, long InitialPosition, short MoveMoment, short ReferenceBase);
/*******************************************************************************************
 Function: Sends the first point from a series of PT points and sets the PT motion mode.
 Input arguments:
	Position:	drive position for the desired point
	Time:		amount of time for the segment
	PTCounter:	integrity counter for current PT point
	PositionType: ABSOLUTE_POSITION or RELATIVE_POSITION
	InitialPosition:	drive initial position at the start of an absolute PT movement.
							It is taken into consideration only if an absolute movement is requested
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	ReferenceBase:	
		FROM_MEASURE -> the position reference starts from the actual measured position value
		FROM_REFERENCE -> the position reference starts from the actual reference position value
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/
BOOL TML_EXPORT TS_PTSetup(short ClearBuffer, short IntegrityChecking, short ChangePTCounter,
						short AbsolutePositionSource, short ChangeLowLevel, short PTCounterValue, short LowLevelValue);
/*******************************************************************************************
 Function: For PT motion mode parametrization and setup.
 Input arguments:
   ClearBuffer:	0 -> nothing
						1 -> clears the PT buffer
   IntegrityChecking:	0 -> PT integrity counter checking is active (default)
						1 -> PT integrity counter checking is inactive
   ChangePVTCounter:	0 -> nothing
						1 -> drive internal PT integrity counter is changed with the value specified PTCounterValue
   AbsolutePositionSource:	specifies the source for the initial position in case the PT motion mode will be absolute
							0 -> initial position read from PVTPOS0
							1 -> initial position read from current value of target positio (TPOS)
   ChangeLowLevel:		0 -> nothing
						1 -> the parameter for BufferLow signaling is changed with the value specified LowLevelValue
   PTCounterValue:	New value for the drive internal PT integrity counter
   LowLevelValue:		New value for the level of the BufferLow signal
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_MoveSCurveRelative(long RelPosition, double Speed, double Acceleration, long JerkTime, short MoveMoment, short DecelerationType);
/*******************************************************************************************
 Function: For relative S-Curve motion mode.
 Input arguments:
	RelPosition: 	Relative position reference value
	Speed: 		Slew speed
	Acceleration: 	Acceleration  decceleration
	JerkTime:	The time after the acceleration reaches the desired value.        
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	DecelerationType:	
		S_CURVE_SPEED_PROFILE -> s-curve speed profile
		TRAPEZOIDAL_SPEED_PROFILE -> trapezoidal speed profile
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_MoveSCurveAbsolute(long AbsPosition, double Speed, double Acceleration, long JerkTime, short MoveMoment, short DecelerationType);
/*******************************************************************************************
 Function: For absolute S-Curve motion mode.
 Input arguments:
	AbsPosition: 	Absolute position reference value
	Speed: 		Slew speed
	Acceleration: 	Acceleration  decceleration
	JerkTime:	The time after wich the acceleration reaches the desired value.
	MoveMoment:		
		UPDATE_NONE -> setup motion parameters, movement will start latter (on an Update command)
		UPDATE_IMMEDIATE -> start moving immediate
		UPDATE_ON_EVENT -> start moving on event
	DecelerationType:	
		S_CURVE_SPEED_PROFILE -> s-curve speed profile
		TRAPEZOIDAL_SPEED_PROFILE -> trapezoidal speed profile
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

/*******************************************************************/
/*******************EVENT-RELATED functions*************************/
/*******************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_CheckEvent(BOOL& event);
#else
BOOL TML_EXPORT TS_CheckEvent(BOOL* event);
#endif
/*******************************************************************************************
 Function: Check if the actually active event occured.
 Output arguments:
 event: TRUE on event detected
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnMotionComplete(BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when the motion is complete.
 Input arguments:
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On motion complete, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnMotorPosition(short PositionType, long Position, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when motor position is over/under imposed value.
 Input arguments:
	PositionType: ABSOLUTE_POSITION or RELATIVE_POSITION
	Position:	Position value to be reached
	Over:		TRUE -> Look for position over; FALSE -> Look for position below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnLoadPosition(short PositionType, long Position, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when load position is over/under imposed value.
 Input arguments:
	PositionType: ABSOLUTE_POSITION or RELATIVE_POSITION
	Position:	Position value to be reached
	Over:		TRUE -> Look for position over; FALSE -> Look for position below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnMotorSpeed(double Speed, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when motor speed is over/under imposed value.
 Input arguments:
	Speed:		Speed value to be reached
	Over:		TRUE -> Look for speed over; FALSE -> Look for speed below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnLoadSpeed(double Speed, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when load speed is over/under imposed value.
 Input arguments:
	Speed:		Speed value to be reached
	Over:		TRUE -> Look for speed over; FALSE -> Look for speed below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnTime(WORD Time, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event after a time interval.
 Input arguments:
	Time:		Time after which the event will be set
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnPositionRef(long Position, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when position reference is over/under imposed value.
 Input arguments:
	Position:	Position value to be reached
	Over:		TRUE -> Look for speed over; FALSE -> Look for speed below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnSpeedRef(double Speed, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when speed reference is over/under imposed value.
 Input arguments:
	Speed:		Speed value to be reached
	Over:		TRUE -> Look for speed over; FALSE -> Look for speed below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnTorqueRef(int Torque, BOOL Over, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when torque reference is over/under imposed value.
 Input arguments:
	Torque:		Torque value to be reached
	Over:		TRUE -> Look for speed over; FALSE -> Look for speed below
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnEncoderIndex(short IndexType, short TransitionType, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when encoder index is triggered.
 Input arguments:
	IndexType:	INDEX_1 or INDEX_2
	TransitionType:	TRANSITION_HIGH_TO_LOW or TRANSITION_LOW_TO_HIGH
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnLimitSwitch(short LSWType, short TransitionType, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when selected limit switch is triggered.
 Input arguments:
	LSWType:	LSW_NEGATIVE or LSW_POSITIVE
	TransitionType:	TRANSITION_HIGH_TO_LOW or TRANSITION_LOW_TO_HIGH
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:	TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnDigitalInput(BYTE InputPort, short IOState, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when selected input port status is IOState.
 Input arguments:
	InputPort:	Input port number
	IOState:	IO_LOW or IO_HIGH
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:		TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetEventOnHomeInput(short IOState, BOOL WaitEvent, BOOL EnableStop);
/*******************************************************************************************
 Function: Setup event when selected input port status is IOState.
 Input arguments:
	IOState:	IO_LOW or IO_HIGH
	WaitEvent:	TRUE -> Wait until event occurs; FALSE -> Continue
	EnableStop:		TRUE -> On event, stop the motion, FALSE -> Don't stop the motion
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

/*******************************************************************/
/*******************INPUT / OUTPUT functions************************/
/*******************************************************************/

BOOL TML_EXPORT TS_SetupInput(BYTE nIO);
/*******************************************************************************************
 Function: Setup IO port as input.
 Input arguments:
	nIO:	Port number to be set as input
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_GetInput(BYTE nIO, BYTE& InValue);
#else
BOOL TML_EXPORT TS_GetInput(BYTE nIO, BYTE* InValue);
#endif
/*******************************************************************************************
 Function: Get input port status.
 Input arguments:
	nIO:	Input port number to be read
 Output arguments:
	InValue:	the input port status value (0 or 1)
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_GetHomeInput(BYTE& InValue);
#else
BOOL TML_EXPORT TS_GetHomeInput(BYTE* InValue);
#endif
/*******************************************************************************************
 Function: Get home input port status.

 Output arguments:
	InValue:	the input port status value (0 or 1)
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetupOutput(BYTE nIO);
/*******************************************************************************************
 Function: Setup IO port as output.
 Input arguments:
	nIO:	Port number to be set as output
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetOutput(BYTE nIO, BYTE OutValue);
/*******************************************************************************************
 Function: Set output port status.
 Input arguments:
	nIO:	Output port number to be written
	OutValue:		Output port status value to be set (0 or 1)
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_GetMultipleInputs(LPCSTR pszVarName, short& Status);
#else
BOOL TML_EXPORT TS_GetMultipleInputs(LPCSTR pszVarName, short* Status);
#endif
/*******************************************************************************************
 Function:	Read multiple inputs.
 Input arguments:
	pszVarName: temporary variable name used to read input status
 Output arguments:
	Status:	value of multiple input status.
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetMultipleOutputs(LPCSTR pszVarName, short Status);
/*******************************************************************************************
 Function:	Set multiple outputs (for firmware versions FAxx).
	pszVarName: temporary variable name used to set output status
	Status: value to be set
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetMultipleOutputs2(short SelectedPorts, short Status);
/*******************************************************************************************
 Function:	Set multiple outputs (for firmware versions FBxx).
	SelectedPorts: port mask. Set bit n to 1 if you want to update the status of port n.
	Status: value to be set
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

/*******************************************************************/
/*******************General use********************************/
/*******************************************************************/

BOOL TML_EXPORT TS_SendDataToHost(BYTE HostAddress, DWORD StatusRegMask, WORD ErrorRegMask);
/*******************************************************************************************
 Function: Send status and error registers to host.
 Input arguments:
	HostAddress:	axis ID of host
	StatusRegMask: bit mask for status register 
	ErrorRegMask: bit mask for error register
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_OnlineChecksum(WORD startAddress, WORD endAddress, WORD& checksum);
#else
BOOL TML_EXPORT TS_OnlineChecksum(WORD startAddress, WORD endAddress, WORD* checksum);
#endif
/*******************************************************************************************
 Function: Get checksum of a memory range. 
		startAddress:	start memory address
		endAddress: end memory address
 Output arguments:
		checksum: checksum (sum modulo 0xFFFF) of a memory range returned by the active drive/motor  
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_DownloadProgram(LPCSTR pszOutFile, WORD& wEntryPoint);
#else
BOOL TML_EXPORT TS_DownloadProgram(LPCSTR pszOutFile, WORD* wEntryPoint);
#endif
/*******************************************************************************************
 Function: Download a COFF formatted file to the drive, and return the entry point of that file.
 Input arguments:
	pszOutFile:	Path to the output TML object file
 Output arguments:
	wEntryPoint: the entry point (start address) of the downloaded file
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_DownloadSwFile(LPCSTR pszSwFile);
#else
BOOL TML_EXPORT TS_DownloadSwFile(LPCSTR pszSwFile);
#endif
/*******************************************************************************************
 Function: Download a .sw file to the drive's E2PROM.
 Input arguments:
	pszSwFile:	Path to the SW file generated from EasyMotion Studio/EasySetUp
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_GOTO(WORD address);
/*******************************************************************************************
 Function: Execute a GOTO instruction on the drive.
 Input arguments:
	address: program memory address of the instruction
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_GOTO_Label(LPCSTR pszLabel);
/*******************************************************************************************
 Function: Execute a GOTO instruction on the drive.
 Input arguments:
	pszLabel: label of the instruction
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_CALL(WORD address);
/*******************************************************************************************
 Function: Execute a CALL instruction on the drive.
 Input arguments:
	address: address of the procedure
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_CALL_Label(LPCSTR pszFunctionName);
/*******************************************************************************************
 Function: Execute a CALL instruction on the drive.
 Input arguments:
	pszFunctionName: name of the procedure to be executed
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_CancelableCALL(WORD address);
/*******************************************************************************************
 Function: Execute a cancelable call (CALLS) instruction on the drive.
 Input arguments:
	address: address of the procedure
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_CancelableCALL_Label(LPCSTR pszFunctionName);
/*******************************************************************************************
 Function: Execute a cancelable call (CALLS) instruction on the drive.
 Input arguments:
	pszFunctionName: name of the procedure to be executed
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_ABORT(void);
/*******************************************************************************************
 Function:  Execute ABORT instruction on the drive (aborts execution of a procedure called 
			with cancelable call instruction).
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_Execute(LPCSTR pszCommands);
/*******************************************************************************************
 Function: Execute TML commands entered in TML source code format (as is entered in Command Interpreter).
 Input arguments:
	pszCommands: String containing the TML source code to be executed. Multiple lines are allowed.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_ExecuteScript(LPCSTR pszFileName);
/*******************************************************************************************
 Function: Execute TML commands in TML source code, from a script file (as is entered in Command Interpreter).
 Input arguments:
	pszFileName: The name of the file containing the TML source code to be executed.
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_GetOutputOfExecute(LPSTR pszOutput, int nMaxChars);
/*******************************************************************************************
 Function: Return the TML output code of the last previously executed library function call.
 Input arguments:
	pszOutput: String containing the TML source code generated at the last library function call.
	nMaxChars: maximum number of characters to return in the string
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_SetupLogger(WORD wLogBufferAddr, WORD wLogBufferLen, WORD* arrayAddresses, WORD countAddr, WORD period);
/*******************************************************************************************
 Function: Setup logger parameters (could be set up on a group/broadcast destination).
 Input arguments:
	wLogBufferAddr: The address of logger buffer in drive memory, where data will be stored during logging
	wLogBufferLen: The length in WORDs of the logger buffer
	arrayAddresses: An array containing the drive memory addresses to be logged
	countAddr: The number of memory addresses to be logged
	period: How offen to log the data: a value between 1 and 7FFF (useful only for new generation drives).
		If it is different than 1, one set of data will be stored at every "period" samplings. 
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_StartLogger(WORD wLogBufferAddr, BYTE LogType);
/*******************************************************************************************
 Function: Start the logger on a drive (could be started on a group/broadcast destination).
 Input arguments:
	wLogBufferAddr: address of logger buffer (previously set by TS_SetupLogger)
	LogType: 
			LOGGER_FAST: logging occurs in fast sampling control loop (current loop)
			LOGGER_SLOW: logging occurs in slow sampling control loop (position/speed loop)
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_CheckLoggerStatus(WORD wLogBufferAddr, WORD& status);
#else
BOOL TML_EXPORT TS_CheckLoggerStatus(WORD wLogBufferAddr, WORD* status);
#endif
/*******************************************************************************************
 Function: Check logger status. (destination must be a single axis).
 Input arguments:
	wLogBufferAddr: address of logger buffer (previously set by TS_SetupLogger)
 Output arguments:
	status: Number of points still remaining to capture; if it is 0, the logging is completed
	return:		TRUE if no error; FALSE if error
******************************************************************************************/

#ifdef __cplusplus
BOOL TML_EXPORT TS_UploadLoggerResults(WORD wLogBufferAddr, WORD* arrayValues, WORD& countValues);
#else
BOOL TML_EXPORT TS_UploadLoggerResults(WORD wLogBufferAddr, WORD* arrayValues, WORD* countValues);
#endif
/*******************************************************************************************
 Function: Upload logged data from the drive (destination must be a single axis).
 Input arguments:
	wLogBufferAddr: address of logger buffer (previously set by TS_SetupLogger)
	arrayValues:	Pointer to the array where the uploaded data is stored on the PC
	countValues:	The size of arrayValues
 Output arguments:
	arrayValues:	uploaded logger data
	countValues:	The size of actualized data (lower or equal with countValues input value)
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

void TML_EXPORT TS_RegisterHandlerForUnrequestedDriveMessages(pfnCallbackRecvDriveMsg handler);
/*******************************************************************************************
 Function: Register application's handler for unrequested drive messages.
 Input arguments:
 pfnCallbackRecvDriveMsg:		pointer to handler
 Output arguments:
*******************************************************************************************/

BOOL TML_EXPORT TS_CheckForUnrequestedDriveMessages(void);
/*******************************************************************************************
 Function: Check if there are new unrequested drive messages and call handler for every message received.
 Input arguments:
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

BOOL TML_EXPORT TS_DriveInitialisation(void);
/*******************************************************************************************
 Function: Verifies if the setup table is valid and executes the ENDINIT command. The function 
		   must be called only after TS_LoadSetup & TS_SetupAxis & TS_SelectAxis are called. 
		   If the setup table is invalid then use the EasySetUp or EasyMotion Studio to download
		   a valid setup table. Please note that after the setup table download, the drive must
		   be reset in order to activate the new setup data. 
 Input arguments:
 Output arguments:
	return:		TRUE if no error; FALSE if error
*******************************************************************************************/

#ifdef __cplusplus
}
#endif

#endif //__TML_LIB_H__
