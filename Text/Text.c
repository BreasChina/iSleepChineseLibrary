/******************************************************************************
** File name    :        Text.c
** Project      :        PV21
** File Type    :        Data file
** Description	:
**
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-06-14   *   FM   *  ---  * 	File Created
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                                  INCLUDE FILES
******************************************************************************/
#include <stdio.h>


#include "Text.h"
/******************************************************************************
** # DEFINES
******************************************************************************/

/******************************************************************************
** TYPE DEFINITIONS
******************************************************************************/

/******************************************************************************
** GLOBAL CONSTANT DEFINITIONS
******************************************************************************/

/******************************************************************************
** GLOBAL VARIABLE DEFINITIONS
******************************************************************************/

/******************************************************************************
** STATIC CONSTANT DEFINITIONS
******************************************************************************/

/******************************************************************************
**                              	STATIC VARIABLE DEFINITIONS
******************************************************************************/
//#pragma constseg = __data20 TEXTAREA
#pragma constseg=TEXT_AREA
const unsigned char PCuc_Language        = CURRENT_LANGUAGE;
const unsigned char PCuc_LanguageVersion = LANGUAGE_VERSION;

// Menus:
Tst_String Past_MenuText[MAX_NO_MENU_STRINGS] =
{
    { TXT_MENU_NO_TEXT,                 0,    52, 0 },    // 0
    { TXT_MENU_SETUP,    TXT_MENU_SETUP_X,    52, 0 },    // 1
    { TXT_MENU_SETUP,    TXT_MENU_SETUP_1_X,  52, 0 },    // 2    PV22 and PV20i Hospital mode
    { TXT_MENU_OTHERS,   TXT_MENU_OTHERS_X,   52, 0 },    // 3
    { TXT_MENU_OTHERS,   TXT_MENU_OTHERS_1_X, 52, 0 },    // 4    PV22 and PV20i  Hospital mode
    { TXT_MENU_HUMIDITY, TXT_MENU_HUMIDITY_X, 52, 0 },    // 5
    { TXT_MENU_RAMP,     TXT_MENU_RAMP_X,     52, 0 },    // 6
    { TXT_MENU_OK,       TXT_MENU_OK_X,       52, 0 },    // 7
    { TXT_MENU_CANCEL,   TXT_MENU_CANCEL_X,   52, 0 },    // 8
    { TXT_MENU_YES,      TXT_MENU_YES_X,      52, 0 },    // 9
    { TXT_MENU_SELECT,   TXT_MENU_SELECT_X,   52, 0 },    // 10
    { TXT_MENU_NEXT,     TXT_MENU_NEXT_X,     52, 0 },    // 11
    { TXT_MENU_CHANGE,   TXT_MENU_CHANGE_X,   52, 0 },    // 12
    { TXT_MENU_MODE,     TXT_MENU_MODE_X,     52, 0 },    // 13
    { TXT_MENU_E_ADAPT,  TXT_MENU_E_ADAPT_X,  52, 0 }     // 14
};

// Empty string
string Pasz_NoText = L"";

// Units:
string Pasz_UnitText[MAX_NO_UNIT_STRINGS] =
{
    TXT_UNIT_EMPTY       ,
    TXT_UNIT_CMH20       ,
    TXT_UNIT_H_PASCAL    ,
    TXT_UNIT_L_MIN       ,
    TXT_UNIT_MIN         ,
    TXT_UNIT_H           ,
    TXT_UNIT_BPM         ,
    TXT_UNIT_CMH20_1     ,
    TXT_UNIT_H_PASCAL_1  ,
    TXT_UNIT_ML          ,
    TXT_UNIT_L
};

// Main Display
string Pasz_MainText[NO_MAIN_STRINGS] =
{
    TXT_MAIN_PRESSURE  ,
    TXT_MAIN_LEAKAGE   ,
    TXT_MAIN_BR        ,
    TXT_MAIN_L         ,
    TXT_MAIN_AP        ,
    TXT_MAIN_P_LOW     ,
    TXT_MAIN_P_HIGH    ,
    TXT_MAIN_SNOOZE    ,
    TXT_MAIN_MASK_OFF  ,
    TXT_MAIN_I_E_RATIO ,
    TXT_MAIN_TIDAL_VOL
};

// Setup:
string Pasz_SetupText[NO_SETUP_STRINGS] =
{
    TXT_SETUP_CPAP         ,
    TXT_SETUP_IPAP         ,
    TXT_SETUP_EPAP         ,
    TXT_SETUP_INSP_TRIGGER ,
    TXT_SETUP_EXP_TRIGGER  ,
    TXT_SETUP_BACKUP_RATE  ,
    TXT_SETUP_RISE_TIME    ,
    TXT_SETUP_MIN_PRESSURE ,
    TXT_SETUP_MAX_PRESSURE ,
    TXT_SETUP_RAMP_PRESSURE,
    TXT_SETUP_RAMP_TIME    ,
    TXT_SETUP_E_ADAPT_LEVEL,
    TXT_SETUP_E_ADAPT_SETTING ,
    TXT_SETUP_CPAP_NO_EDIT
};

// Mode:
string Pasz_ModeText[NO_MODE_STRINGS] =
{
    TXT_MODE_PSV          ,
    TXT_MODE_CPAP         ,
    TXT_MODE_I_MODE       ,
    TXT_MODE_ADAPT        ,
    TXT_MODE_START_LEAKAGE_TEST
};

// Others:
string Pasz_OthersText[NO_OTHERS_STRINGS] =
{
    TXT_OTHERS_WAKEUPALARM_TIMEDATE,
    TXT_OTHERS_WAKEUPALARM         ,
    TXT_OTHERS_DEVICE_SETTINGS     ,
    TXT_OTHERS_DEVICE_INFORMATION  ,
    TXT_OTHERS_MEMORY_CARD

};

// Humidity:
string Pasz_HumText[NO_HUM_STRINGS] =
{
    TXT_HUM_HUMIDITY        ,
    TXT_HUM_HUMIDIFIER_FUNC ,
    TXT_HUM_HUMIDIFIER_LEVEL
};

// Ramp:
string Pasz_RampText[NO_RAMP_STRINGS] =
{
    TXT_RAMP_PRESSURE   ,
    TXT_RAMP_TIME       ,
    TXT_RAMP_FUNCTION   ,
    TXT_RAMP_ALWAYS_RAMP
};

// Wakeup Alarm, Time/Date:
string Pasz_WakeupText[NO_TIME_STRINGS] =
{
    TXT_TIME_WAKEUP_ALARM,
    TXT_TIME_WAKEUP_TIME ,
    TXT_TIME_REAL_TIME   ,
    TXT_TIME_REAL_DATE
};

// Device Settings:
string Pasz_DevSetText[NO_DEV_SET_STRINGS] =
{
    TXT_DEV_SET_DISPLAY_LIGHT  ,
    TXT_DEV_SET_LIGHT_INTENSITY,
    TXT_DEV_KEY_SOUND          ,
    TXT_DEV_TIME_FORMAT        ,
    TXT_DEV_HIGH_LEAK_ALERT    ,
    TXT_DEV_HIGH_PRESS_ALERT
};

// Device Information
string Pasz_DevInfoText[NO_DEV_INFO_STRINGS] =
{
    TXT_DEV_INFO_PAT_OP_TIME,
    TXT_DEV_INFO_TOT_OP_TIME,
    TXT_DEV_INFO_FW_VER
};

// Memory Card
string_long Pasz_MemCardText[NO_MEM_CARD_STRINGS] =
{
    TXT_MEM_CARD_SAVE_LOG_SET,
    TXT_MEM_CARD_SAVE_SET,
    TXT_MEM_CARD_LOAD_SET,
    TXT_MEM_CARD_ERASE_LOG,

    TXT_MEM_CARD_SAVE_LOG_SET_Q,
    TXT_MEM_CARD_SAVE_LOG_SET_P,
    TXT_MEM_CARD_SAVE_LOG_SET_D,

    TXT_MEM_CARD_SAVE_SET_Q,
    TXT_MEM_CARD_SAVE_SET_P,
    TXT_MEM_CARD_SAVE_SET_D,

    TXT_MEM_CARD_LOAD_SET_Q,
    TXT_MEM_CARD_LOAD_SET_P,
    TXT_MEM_CARD_LOAD_SET_D,

    TXT_MEM_CARD_ERASE_LOG_Q,
    TXT_MEM_CARD_ERASE_LOG_P,
    TXT_MEM_CARD_ERASE_LOG_D,

    TXT_MEM_CARD_NO_CARD,
    TXT_MEM_CARD_CRC_ERR,
    TXT_MEM_CARD_SER_MISS,
    TXT_MEM_CARD_ERROR
};

// Info
string_long Pasz_InfoText[NO_INFO_STRINGS] =
{
    TXT_INFO_TEXT_ERROR,
    TXT_INFO_TEXT_ERROR_CODE,
    TXT_INFO_TEXT_HUM_DISC,
    TXT_INFO_TEXT_HUM_LOW_TEMP,
    TXT_INFO_TEXT_HUM_HIGH_TEMP,
    TXT_INFO_TEXT_SETTINGS,
    TXT_INFO_TEXT_HIGH_LEAKAGE,
    TXT_INFO_TEXT_CHECK_POW_SUP,
    TXT_INFO_TEXT_HIGH_TEMP,
    TXT_INFO_TEXT_INT_FAIL,
    TXT_INFO_TEXT_HIGH_PRESS_ALERT,
    TXT_INFO_TEXT_HIGH_LEAK_ALERT
};

// Values
string Pasz_ValueText[NO_VALUE_STRINGS] =
{
    TXT_VALUE_OFF,
    TXT_VALUE_ON,
    TXT_VALUE_DISABLE,
    TXT_VALUE_DISABLED,
    TXT_VALUE_ENABLE,
    TXT_VALUE_DELAYED,
    TXT_VALUE_12H,
    TXT_VALUE_24H,
    TXT_VALUE_AM,
    TXT_VALUE_PM,
    TXT_VALUE_AM_S,
    TXT_VALUE_PM_S,
    TXT_VALUE_RAMPONLY,
    TXT_VALUE_IMODE,
    TXT_VALUE_EMODE,
    TXT_VALUE_AUTO,
};

// Log
string_long Pasz_LogText[NO_LOG_STRINGS] =
{
    TXT_LOG_TRANSFER
};

#pragma constseg=default
/******************************************************************************
** STATIC FUNCTION PROTOTYPES
******************************************************************************/

/******************************************************************************
** FUNCTIONS
******************************************************************************/

/******************************************************************************
**                              		END OF FILE
******************************************************************************/
