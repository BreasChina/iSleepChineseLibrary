#ifndef VALUE_DEFINE_H
#define VALUE_DEFINE_H
/******************************************************************************
** File name    :        Value_Define.h
** Project      :        PV21
** File Type    :        Header
** Description	:
**
** Revision History:
** Date         Engineer    ECP     Changes
** ----------------------------------------------------------------------------
** 2005-09-27   *   FM   *  ---  * 	File Created
** ----------------------------------------------------------------------------
**
******************************************************************************/

/******************************************************************************
**                               INCLUDE FILES
******************************************************************************/


/******************************************************************************
**                                #DEFINES
******************************************************************************/
// The reason for ".._DISABLE" and "..._DISABLED" is that spanish translator
// wanted different strings for disabled used in two different settings
#define  IX_VALUE_OFF       0
#define  IX_VALUE_ON        1
#define  IX_VALUE_DISABLE   2
#define  IX_VALUE_DISABLED  3
#define  IX_VALUE_ENABLE    4
#define  IX_VALUE_DELAYED   5
#define  IX_VALUE_12H       6
#define  IX_VALUE_24H       7
#define  IX_VALUE_AM        8
#define  IX_VALUE_PM        9
#define  IX_VALUE_AM_S     10
#define  IX_VALUE_PM_S     11
#define  IX_VALUE_RAMPONLY 12
#define  IX_VALUE_IMODE    13
#define  IX_VALUE_EMODE    14
#define  IX_VALUE_AUTO     15

#define NO_VALUE_STRINGS   16
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Off"
#define  TXT_VALUE_ON       L"On"
#define  TXT_VALUE_DISABLE  L"Inactivo"
#define  TXT_VALUE_DISABLED L"No disponible"
#define  TXT_VALUE_ENABLE   L"Disponible"
#define  TXT_VALUE_DELAYED  L"Con retar."
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Solo Rampa"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Off"
#define  TXT_VALUE_ON       L"On"
#define  TXT_VALUE_DISABLE  L"Ei toim."
#define  TXT_VALUE_DISABLED L"Toimimaton"
#define  TXT_VALUE_ENABLE   L"Toimiva"
#define  TXT_VALUE_DELAYED  L"Viiväst."
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Vain RAMP"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Aus"
#define  TXT_VALUE_ON       L"Ein"
#define  TXT_VALUE_DISABLE  L"Inaktiv"
#define  TXT_VALUE_DISABLED L"Inaktiv"
#define  TXT_VALUE_ENABLE   L"Aktiv"
#define  TXT_VALUE_DELAYED  L"Verzög"
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Nur Rampe"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Off"
#define  TXT_VALUE_ON       L"On"
#define  TXT_VALUE_DISABLE  L"Sl?fra"
#define  TXT_VALUE_DISABLED L"Slået fra"
#define  TXT_VALUE_ENABLE   L"Slået til"
#define  TXT_VALUE_DELAYED  L"Forsinket"
#define  TXT_VALUE_12H      L"12 T."
#define  TXT_VALUE_24H      L"24 T."
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Kun Rampe"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Arrêt"
#define  TXT_VALUE_ON       L"Marche"
#define  TXT_VALUE_DISABLE  L"Inactif"
#define  TXT_VALUE_DISABLED L"Inactif"
#define  TXT_VALUE_ENABLE   L"Actif"
#define  TXT_VALUE_DELAYED  L"Retard?
#define  TXT_VALUE_12H      L"12h"
#define  TXT_VALUE_24H      L"24h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Durant rampe"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"AV"
#define  TXT_VALUE_ON       L"P?
#define  TXT_VALUE_DISABLE  L"Utkobl."
#define  TXT_VALUE_DISABLED L"Utkobl."
#define  TXT_VALUE_ENABLE   L"Innkobl."
#define  TXT_VALUE_DELAYED  L"Forsink."
#define  TXT_VALUE_12H      L"12 t"
#define  TXT_VALUE_24H      L"24t"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Bare i Ramp"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Av"
#define  TXT_VALUE_ON       L"P?
#define  TXT_VALUE_DISABLE  L"Ej aktiv"
#define  TXT_VALUE_DISABLED L"Ej aktiv"
#define  TXT_VALUE_ENABLE   L"Aktiv"
#define  TXT_VALUE_DELAYED  L"Fördröjd"
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Endast Ramp"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Off"
#define  TXT_VALUE_ON       L"On"
#define  TXT_VALUE_DISABLE  L"Disable"
#define  TXT_VALUE_DISABLED L"Disabled"
#define  TXT_VALUE_ENABLE   L"Enabled"
#define  TXT_VALUE_DELAYED  L"Delayed"
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Ramp Only"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L""
#define  TXT_VALUE_ON       L""
#define  TXT_VALUE_DISABLE  L""
#define  TXT_VALUE_DISABLED L""
#define  TXT_VALUE_ENABLE   L""
#define  TXT_VALUE_DELAYED  L""
#define  TXT_VALUE_12H      L""
#define  TXT_VALUE_24H      L""
#define  TXT_VALUE_AM       L""
#define  TXT_VALUE_PM       L""
#define  TXT_VALUE_AM_S     L""
#define  TXT_VALUE_PM_S     L""
#define  TXT_VALUE_RAMPONLY L""
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Uit"
#define  TXT_VALUE_ON       L"Aan"
#define  TXT_VALUE_DISABLE  L"Onbruikbaar"
#define  TXT_VALUE_DISABLED L"Uitgeschakeld"
#define  TXT_VALUE_ENABLE   L"Ingeschakeld"
#define  TXT_VALUE_DELAYED  L"Vertraagd"
#define  TXT_VALUE_12H      L"12h"
#define  TXT_VALUE_24H      L"24h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Enkel Ramp"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Off"
#define  TXT_VALUE_ON       L"On"
#define  TXT_VALUE_DISABLE  L"Disabil"
#define  TXT_VALUE_DISABLED L"Disabilitato"
#define  TXT_VALUE_ENABLE   L"Abilitato"
#define  TXT_VALUE_DELAYED  L"Ritardo"
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Solo Rampa"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Off"
#define  TXT_VALUE_ON       L"On"
#define  TXT_VALUE_DISABLE  L"Disable"
#define  TXT_VALUE_DISABLED L"Disabled"
#define  TXT_VALUE_ENABLE   L"Enabled"
#define  TXT_VALUE_DELAYED  L"Delayed"
#define  TXT_VALUE_12H      L"12\x03C9\x03C1\x03BF"
#define  TXT_VALUE_24H      L"24\x03C9\x03C1\x03BF"
#define  TXT_VALUE_AM       L"\x03BC\x03BC"
#define  TXT_VALUE_PM       L"\x03C0\x03BC"
#define  TXT_VALUE_AM_S     L"\x03BC\x03BC"
#define  TXT_VALUE_PM_S     L"\x03C0\x03BC"
#define  TXT_VALUE_RAMPONLY L"\x039C\x03CC\x03BD\x03BF \x03A1\x03AC\x03BC\x03C0\x03B1"
#define  TXT_VALUE_IMODE    L"i"
#define  TXT_VALUE_EMODE    L"e"
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Desliga"
#define  TXT_VALUE_ON       L"Ligar"
#define  TXT_VALUE_DISABLE  L"Inativo"
#define  TXT_VALUE_DISABLED L"Inativo"
#define  TXT_VALUE_ENABLE   L"Ativado"
#define  TXT_VALUE_DELAYED  L"Atrasado"
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Somente Rampa"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"Wy"L"\x0142\x0105"L"cz"
#define  TXT_VALUE_ON       L"W\x0142\x0105"L"cz"
#define  TXT_VALUE_DISABLE  L"Uszkodz"
#define  TXT_VALUE_DISABLED L"Uszkodzony"
#define  TXT_VALUE_ENABLE   L"Umo\x017Cliwiony"
#define  TXT_VALUE_DELAYED  L"Opó\x017Aniony"
#define  TXT_VALUE_12H      L"12 h"
#define  TXT_VALUE_24H      L"24 h"
#define  TXT_VALUE_AM       L"AM"
#define  TXT_VALUE_PM       L"PM"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"Tylko narastanie"
#define  TXT_VALUE_IMODE    L"i"
#define  TXT_VALUE_EMODE    L"e"
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"\x30AA\x30D5"
#define  TXT_VALUE_ON       L"\x30AA\x30F3"
#define  TXT_VALUE_DISABLE  L"\x7121\x52B9"
#define  TXT_VALUE_DISABLED L"\x7121\x52B9"
#define  TXT_VALUE_ENABLE   L"\x6709\x52B9"
#define  TXT_VALUE_DELAYED  L"\x4E00\x6642\x70B9\x706F"
#define  TXT_VALUE_12H      L"12\x6642\x9593"
#define  TXT_VALUE_24H      L"24\x6642\x9593"
#define  TXT_VALUE_AM       L"\x5348\x524D"
#define  TXT_VALUE_PM       L"\x5348\x5F8C"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"\x30E9\x30F3\x30D7\x4E2D\x306E\x307F"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"\x5173\x95ED"
#define  TXT_VALUE_ON       L"\x6253\x5F00"
#define  TXT_VALUE_DISABLE  L"\x7981\x7528"
#define  TXT_VALUE_DISABLED L"\x5DF2\x7981\x7528"
#define  TXT_VALUE_ENABLE   L"\x542F\x7528"
#define  TXT_VALUE_DELAYED  L"\x5EF6\x8FDF"
#define  TXT_VALUE_12H      L"12\x65F6"
#define  TXT_VALUE_24H      L"24\x65F6"
#define  TXT_VALUE_AM       L"\x4E0A\x5348"
#define  TXT_VALUE_PM       L"\x4E0B\x5348"
#define  TXT_VALUE_AM_S     L"AM"
#define  TXT_VALUE_PM_S     L"PM"
#define  TXT_VALUE_RAMPONLY L"\x4EC5\x5EF6\x65F6\x5347\x538B"
#define  TXT_VALUE_IMODE    L"i" // iMode fan text
#define  TXT_VALUE_EMODE    L"e" // eAdapt fan text
#define  TXT_VALUE_AUTO     L"Auto"


/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define  TXT_VALUE_OFF      L"abcdefg"
#define  TXT_VALUE_ON       L"abcdefg"
#define  TXT_VALUE_DISABLE  L"abcdefg"
#define  TXT_VALUE_DISABLED L"abcdefg"
#define  TXT_VALUE_ENABLE   L"abcdefg"
#define  TXT_VALUE_DELAYED  L"abcdefg"
#define  TXT_VALUE_12H      L"abcdefg"
#define  TXT_VALUE_24H      L"abcdefg"
#define  TXT_VALUE_AM       L"ab"
#define  TXT_VALUE_PM       L"ab"
#define  TXT_VALUE_AM_S     L"ab"
#define  TXT_VALUE_PM_S     L"ab"
#define  TXT_VALUE_RAMPONLY L"a"
#define  TXT_VALUE_IMODE    L"a"
#define  TXT_VALUE_EMODE    L"a"
#define  TXT_VALUE_AUTO     L"a"


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

#endif  // VALUE_DEFINE_H

