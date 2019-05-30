#ifndef DEVICEINFORMATION_DEFINE_H
#define DEVICEINFORMATION_DEFINE_H
/******************************************************************************
** File name    :        DeviceInformation_Define.h
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
#define IX_DEV_INFO_PAT_OP_TIME     0
#define IX_DEV_INFO_TOT_OP_TIME     1
#define IX_DEV_INFO_FW_VER          2

#define NO_DEV_INFO_STRINGS         3

/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Horas de paciente"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Total tiempo"
#define TXT_DEV_INFO_FW_VER          L"Version Firmware"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Potilastunnit"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Kok.käyttötunnit"
#define TXT_DEV_INFO_FW_VER          L"Versio"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Patientenstunden"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Betriebsstunden"
#define TXT_DEV_INFO_FW_VER          L"Firmware Version"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME    L"Patient brugstid"
#define TXT_DEV_INFO_TOT_OP_TIME    L"Total brugstid"
#define TXT_DEV_INFO_FW_VER         L"Software version"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Compteur patient"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Compteur horaire"
#define TXT_DEV_INFO_FW_VER          L"Version firmware"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Pasient brukstid"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Samlet driftstid"
#define TXT_DEV_INFO_FW_VER          L"Firmware Version"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Patientdrifttid"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Total drifttid"
#define TXT_DEV_INFO_FW_VER          L"Programversion"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Patient Op. Time"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Total Op. Time"
#define TXT_DEV_INFO_FW_VER          L"Firmware Version"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L""
#define TXT_DEV_INFO_TOT_OP_TIME     L""
#define TXT_DEV_INFO_FW_VER          L""
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Patiënt Op. Tijd"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Totale Op. Tijd"
#define TXT_DEV_INFO_FW_VER          L"Firmware versie"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Contaore paziente"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Contaore totale"
#define TXT_DEV_INFO_FW_VER          L"Versione firmware"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"\x038F\x03C1\x03B5\x03C2 \x03A7\x03C1\x03AE\x03C3\x03B7\x03C2 \x0391\x03C3\x03B8\x03B5\x03BD\x03AE"
#define TXT_DEV_INFO_TOT_OP_TIME     L"\x039F\x03BB\x03B9\x03BA\x03AE \x038F\x03C1\x03B1 \x03A7\x03C1\x03AE\x03C3\x03B7\x03C2"
#define TXT_DEV_INFO_FW_VER          L"\x0388\x03BA\x03B4\x03BF\x03C3\x03B7 \x03BB\x03BF\x03B3\x03B9\x03C3\x03BC\x03B9\x03BA\x03BF\x03CD"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Tempo Uso Paciente"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Tempo Total Uso"
#define TXT_DEV_INFO_FW_VER          L"Versão Firmware"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"Czas went. pacjenta"
#define TXT_DEV_INFO_TOT_OP_TIME     L"Czas pracy resp."
#define TXT_DEV_INFO_FW_VER          L"Wersja"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"\x60A3\x8005\x4F7F\x7528\x6642\x9593"
#define TXT_DEV_INFO_TOT_OP_TIME     L"\x5408\x8A08\x4F5C\x52D5\x6642\x9593"
#define TXT_DEV_INFO_FW_VER          L"\x672C\x4F53\x30D0\x30FC\x30B8\x30E7\x30F3"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"\x60A3\x8005\x4F7F\x7528\x65F6\x95F4"
#define TXT_DEV_INFO_TOT_OP_TIME     L"\x603B\x8FD0\x884C\x65F6\x95F4"
#define TXT_DEV_INFO_FW_VER          L"\x56FA\x4EF6\x7248\x672C"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_DEV_INFO_PAT_OP_TIME     L"abcdefghijklmnop"
#define TXT_DEV_INFO_TOT_OP_TIME     L"abcdefghijklmnop"
#define TXT_DEV_INFO_FW_VER          L"abcdefghijklmnop"

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

#endif  // DEVICEINFORMATION_DEFINE_H

