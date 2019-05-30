#ifndef UNIT_DEFINE_H
#define UNIT_DEFINE_H
/******************************************************************************
** File name    :        Unit_define.h
** Project      :        PV21
** File Type    :        Header
** Description	:
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-05-25   *   FM   *  ---  * 	File Transfered
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                               INCLUDE FILES
******************************************************************************/

/******************************************************************************
**                                #DEFINES
******************************************************************************/
#define IX_UNIT_EMPTY        0
#define IX_UNIT_CMH20        1
#define IX_UNIT_H_PASCAL     2
#define IX_UNIT_L_MIN        3
#define IX_UNIT_MIN          4
#define IX_UNIT_H            5
#define IX_UNIT_BPM          6
// Specials for eAdapt menu where CPAP data is between parantese
#define IX_UNIT_CMH20_1      7
#define IX_UNIT_H_PASCAL_1   8
#define IX_UNIT_ML           9
#define IX_UNIT_L           10

#define MAX_NO_UNIT_STRINGS 11
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"rpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"mbar"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"mbar)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH20"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"rpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH20"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/mn"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"c/mn"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH20"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"apm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH20"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L""          // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L""
#define TXT_UNIT_L_MIN         L""
#define TXT_UNIT_MIN           L""
#define TXT_UNIT_H             L""
#define TXT_UNIT_BPM           L""
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"rpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO"          // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH20"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"h"
#define TXT_UNIT_BPM           L"rpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"min"
#define TXT_UNIT_H             L"godz"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH\x007FO" // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"\x5206"
#define TXT_UNIT_H             L"\x6642\x9593"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"cmH2O"          // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"hPa"
#define TXT_UNIT_L_MIN         L"l/min"
#define TXT_UNIT_MIN           L"\x5206"
#define TXT_UNIT_H             L"\x5C0F\x65F6"
#define TXT_UNIT_BPM           L"bpm"
#define TXT_UNIT_CMH20_1       L"cmH2O)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_UNIT_EMPTY         L""
#define TXT_UNIT_CMH20         L"abcde"     // L"cmH2O"
#define TXT_UNIT_H_PASCAL      L"abcde"
#define TXT_UNIT_L_MIN         L"abcde"
#define TXT_UNIT_MIN           L"abcde"
#define TXT_UNIT_H             L"abcde"
#define TXT_UNIT_BPM           L"abcde"
#define TXT_UNIT_CMH20_1       L"cmH\x007FO)" // L"cmH2O)"
#define TXT_UNIT_H_PASCAL_1    L"hPa)"
#define TXT_UNIT_ML            L"ml"
#define TXT_UNIT_L             L"l"

#endif

/********************************************************************************
**                                TYPE DEFINITIONS
********************************************************************************/

/********************************************************************************
**                                CONSTANST OBJECT EXTERNS
********************************************************************************/

/********************************************************************************
**                                VARIABLE OJECTS EXTERNS
********************************************************************************/

/********************************************************************************
**                                FUNCTIONS PROTOTYPES
********************************************************************************/

/********************************************************************************
**                                END OF FILE
********************************************************************************/

#endif  // UNIT_DEFINE_H

