#ifndef TEXT__H
#define TEXT__H
/*******************************************************************************
** File name    :        Text.h
** Project      :        PV21
** File Type    :        Header
** Description	:        This file contains the constant, macros and type
**
**
**
** Revision History:
** Date         Engineer    ECP     Changes
** -----------------------------------------------------------------------------
** 2005-08-08   *   FM  *  ---  * 	File Created
** -----------------------------------------------------------------------------
**
*******************************************************************************/

/*******************************************************************************
**                               INCLUDE FILES
*******************************************************************************/
#include "Language_Define.h"

#include "Menu_Define.h"
#include "Unit_Define.h"
#include "Main_Disp_Define.h"
#include "Setup_Define.h"
#include "Mode_Define.h"
#include "Others_define.h"
#include "Humidity_Define.h"
#include "Ramp_Define.h"
#include "WakeUpAlarm_Define.h"
#include "DeviceSettings_Define.h"
#include "DeviceInformation_Define.h"
#include "MemoryCard_Define.h"
#include "Info_Define.h"
#include "Value_Define.h"
#include "Log_Define.h"

#include  <stddef.h>
/*******************************************************************************
**                                #DEFINES
*******************************************************************************/
#define MAX_STRING_LENGHT       28
#define MAX_STRING_LENGHT_LONG  76

/*******************************************************************************
**                                TYPE DEFINITIONS
*******************************************************************************/

typedef const wchar_t string[MAX_STRING_LENGHT];            // Maxlength for string
typedef const wchar_t string_long[MAX_STRING_LENGHT_LONG];  // Maxlength for string
typedef const struct _Tst_String{
  wchar_t string[MAX_STRING_LENGHT];          // Maxlength for string
  unsigned char X;           // 16-BIT XKOORD
  unsigned char Y;           // 16-BIT YKOORD
  unsigned char font;       // 8-BIT value incl FONT,ITALIC,UNDERLINE,BOLD,SIZE

}Tst_String;


/*******************************************************************************
**                                CONSTANT OBJECT EXTERNS
*******************************************************************************/

/*******************************************************************************
**                                VARIABLE OJECTS EXTERNS
*******************************************************************************/
extern const unsigned char PCuc_Language;
extern const unsigned char PCuc_LanguageVersion;


extern Tst_String Past_MenuText[MAX_NO_MENU_STRINGS];
extern string Pasz_NoText;
extern string Pasz_UnitText[MAX_NO_UNIT_STRINGS];
extern string Pasz_MainText[NO_MAIN_STRINGS];
extern string Pasz_SetupText[NO_SETUP_STRINGS];
extern string Pasz_ModeText[NO_MODE_STRINGS];
extern string Pasz_OthersText[NO_OTHERS_STRINGS];
extern string Pasz_HumText[NO_HUM_STRINGS];
extern string Pasz_RampText[NO_RAMP_STRINGS];
extern string Pasz_WakeupText[NO_TIME_STRINGS];
extern string Pasz_DevSetText[NO_DEV_SET_STRINGS];
extern string Pasz_DevInfoText[NO_DEV_INFO_STRINGS];
extern string_long Pasz_MemCardText[NO_MEM_CARD_STRINGS];
extern string_long Pasz_InfoText[NO_INFO_STRINGS];
extern string Pasz_ValueText[NO_VALUE_STRINGS];
extern string_long Pasz_LogText[NO_LOG_STRINGS];
/*******************************************************************************
**                                FUNCTIONS PROTOTYPES
*******************************************************************************/	

/*******************************************************************************
**                                END OF FILE
*******************************************************************************/
#endif // TEXT__H
