#ifndef WAKEUPALARM_DEFINE_H
#define WAKEUPALARM_DEFINE_H
/******************************************************************************
** File name    :        WakeUpAlarm_Define.h
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
#define IX_TIME_WAKEUP_ALARM    0
#define IX_TIME_WAKEUP_TIME     1
#define IX_TIME_REAL_TIME       2
#define IX_TIME_REAL_DATE       3

#define NO_TIME_STRINGS         4
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM   L"Alarma despertador"
#define TXT_TIME_WAKEUP_TIME    L"Hora despertador"
#define TXT_TIME_REAL_TIME      L"Hora"
#define TXT_TIME_REAL_DATE      L"Fecha"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Herätyshäl."
#define TXT_TIME_WAKEUP_TIME     L"Herätysaika"
#define TXT_TIME_REAL_TIME       L"Aika"
#define TXT_TIME_REAL_DATE       L"Päiväys"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Wecker"
#define TXT_TIME_WAKEUP_TIME     L"Weckzeit"
#define TXT_TIME_REAL_TIME       L"Zeit"
#define TXT_TIME_REAL_DATE       L"Datum"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Vækkeur alarm"
#define TXT_TIME_WAKEUP_TIME     L"Vækkeur tid"
#define TXT_TIME_REAL_TIME       L"Tid"
#define TXT_TIME_REAL_DATE       L"Dato"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Réveil"
#define TXT_TIME_WAKEUP_TIME     L"Heure de réveil"
#define TXT_TIME_REAL_TIME       L"Heure"
#define TXT_TIME_REAL_DATE       L"Date"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Alarm for vekking"
#define TXT_TIME_WAKEUP_TIME     L"Tid for vekking"
#define TXT_TIME_REAL_TIME       L"Tid"
#define TXT_TIME_REAL_DATE       L"Dato"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Väckarklocka"
#define TXT_TIME_WAKEUP_TIME     L"Väckningstid"
#define TXT_TIME_REAL_TIME       L"Tid"
#define TXT_TIME_REAL_DATE       L"Datum"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Wake Up Alarm"
#define TXT_TIME_WAKEUP_TIME     L"Wake Up Time"
#define TXT_TIME_REAL_TIME       L"Time"
#define TXT_TIME_REAL_DATE       L"Date"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"\x5524\x9192\x95F9\x949F"
#define TXT_TIME_WAKEUP_TIME     L"\x5524\x9192\x65F6\x95F4"
#define TXT_TIME_REAL_TIME       L"\x65F6\x95F4"
#define TXT_TIME_REAL_DATE       L"\x65E5\x671F"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Wekker"
#define TXT_TIME_WAKEUP_TIME     L"Wektijd"
#define TXT_TIME_REAL_TIME       L"Tijd"
#define TXT_TIME_REAL_DATE       L"Datum"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Allarme di sveglia"
#define TXT_TIME_WAKEUP_TIME     L"Ora sveglia"
#define TXT_TIME_REAL_TIME       L"Ora"
#define TXT_TIME_REAL_DATE       L"Data"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"\x039E\x03C5\x03C0\x03BD\x03B7\x03C4\x03AE\x03C1\x03B9"
#define TXT_TIME_WAKEUP_TIME     L"\x038F\x03C1\x03B1 \x03B1\x03C6\x03CD\x03C0\x03BD\x03B9\x03C3\x03B7\x03C2"
#define TXT_TIME_REAL_TIME       L"\x03A9\x03C1\x03B1"
#define TXT_TIME_REAL_DATE       L"\x0397\x03BC\x03B5\x03C1\x03BF\x03BC\x03B7\x03BD\x03AF\x03B1"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Alarme Despertador"
#define TXT_TIME_WAKEUP_TIME     L"Horario Despertar"
#define TXT_TIME_REAL_TIME       L"Horario Despertar"
#define TXT_TIME_REAL_DATE       L"Data"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"Alarm budzenia"
#define TXT_TIME_WAKEUP_TIME     L"Czas budzenia"
#define TXT_TIME_REAL_TIME       L"Czas"
#define TXT_TIME_REAL_DATE       L"Data"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"\x76EE\x899A\x3057\x6642\x8A08"
#define TXT_TIME_WAKEUP_TIME     L"\x8D77\x5E8A\x6642\x9593"
#define TXT_TIME_REAL_TIME       L"\x6642\x9593"
#define TXT_TIME_REAL_DATE       L"\x65E5\x4ED8"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"\x5524\x9192\x95F9\x949F"
#define TXT_TIME_WAKEUP_TIME     L"\x5524\x9192\x65F6\x95F4"
#define TXT_TIME_REAL_TIME       L"\x65F6\x95F4"
#define TXT_TIME_REAL_DATE       L"\x65E5\x671F"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_TIME_WAKEUP_ALARM    L"abcdefghijklmnop"
#define TXT_TIME_WAKEUP_TIME     L"abcdefghijklmnop"
#define TXT_TIME_REAL_TIME       L"abcdefghijklmnop"
#define TXT_TIME_REAL_DATE       L"abcdefghijklmnop"

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

#endif  // WAKEUPALARM_DEFINE_H

