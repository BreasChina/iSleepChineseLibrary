#ifndef HUMIDITY_DEFINE_H
#define HUMIDITY_DEFINE_H
/******************************************************************************
** File name    :        Humidity_Define.h
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
#define IX_HUM_HUMIDITY             0
#define IX_HUM_HUMIDIFIER_FUNC      1
#define IX_HUM_HUMIDIFIER_LEVEL     2

#define NO_HUM_STRINGS              3
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Humidificacion"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Humidificador"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Nivel Humidificacion"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Kosteus"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Kostuttaja"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Kosteustaso"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Feuchte"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Befeuchter"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Feuchtegrad"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Fugtighed"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Fugter"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Fugtigheds niveau"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Humidification"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Humidificateur"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Niveau humidif."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Fuktighet"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Fukter"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Fuktighetsniv?

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Fuktighet"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Befuktare"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Befuktningsniv?

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Humidity"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Humidifier"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Humidity Level"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L""
#define TXT_HUM_HUMIDIFIER_FUNC      L""
#define TXT_HUM_HUMIDIFIER_LEVEL     L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Bevochtiging"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Bevochtiger"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Bevochtigingsniveau"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Umidificazione"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Umidificatore"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Livello di umidificazione"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"\x03A5\x03B3\x03C1\x03B1\x03C3\x03AF\x03B1"
#define TXT_HUM_HUMIDIFIER_FUNC      L"\x03A5\x03B3\x03C1\x03B1\x03BD\x03C4\x03AE\x03C1\x03B1\x03C2"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"\x0395\x03C0\x03AF\x03C0\x03B5\x03B4\x03BF \x03C5\x03B3\x03C1\x03B1\x03C3\x03AF\x03B1\x03C2"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Umidade"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Umidificador"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Nível Umidificador"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"Nawil"L"\x017C"L"anie"
#define TXT_HUM_HUMIDIFIER_FUNC      L"Nawil"L"\x017C"L"acz"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"Poziom nawil"L"\x017C"L"ania"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"\x52A0\x6E7F\x5668"
#define TXT_HUM_HUMIDIFIER_FUNC      L"\x52A0\x6E7F\x5668"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"\x52A0\x6E7F\x30EC\x30D9\x30EB"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"\x6E7F\x5316"
#define TXT_HUM_HUMIDIFIER_FUNC      L"\x6E7F\x5316\x5668"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"\x6E7F\x5316\x6C34\x5E73"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_HUM_HUMIDITY             L"abcdefghijklmnop"
#define TXT_HUM_HUMIDIFIER_FUNC      L"abcdefghijklmnop"
#define TXT_HUM_HUMIDIFIER_LEVEL     L"abcdefghijklmnop"

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

#endif  // HUMIDITY_DEFINE_H

