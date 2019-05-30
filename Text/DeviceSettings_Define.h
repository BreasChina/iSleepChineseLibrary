#ifndef DEVICESETTINGS_DEFINE_H
#define DEVICESETTINGS_DEFINE_H
/******************************************************************************
** File name    :        DeviceSettings_Define.h
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
#define IX_DEV_SET_DISPLAY_LIGHT       0
#define IX_DEV_SET_LIGHT_INTENSITY     1
#define IX_DEV_KEY_SOUND               2
#define IX_DEV_TIME_FORMAT             3
#define IX_DEV_HIGH_LEAK_ALERT         4
#define IX_DEV_HIGH_PRESS_ALERT        5

#define NO_DEV_SET_STRINGS             6

/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Luz pantalla"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Intensidad luz"
#define TXT_DEV_KEY_SOUND                L"Sonido teclas"
#define TXT_DEV_TIME_FORMAT              L"Formato hora"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Alerta fuga alta"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Alerta alta presion"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Näytön kirkkaus"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Kirkkaus"
#define TXT_DEV_KEY_SOUND                L"Äänivalinta"
#define TXT_DEV_TIME_FORMAT              L"Aikaformaatti"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Iso vuoto"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Korkea paine"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Displaylicht"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Lichtintensität"
#define TXT_DEV_KEY_SOUND                L"Tastenton"
#define TXT_DEV_TIME_FORMAT              L"Zeit Format"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Leckage-Hoch Warnung"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Druck-Hoch Warnung"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Display Lys"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Lysintensitet"
#define TXT_DEV_KEY_SOUND                L"Lyd for trykknap"
#define TXT_DEV_TIME_FORMAT              L"Tids Format"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Høj Lækage Advarsel"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Høj Tryk Advarsel"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Luminosit?Affich."
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Contraste Affich."
#define TXT_DEV_KEY_SOUND                L"Bips touches"
#define TXT_DEV_TIME_FORMAT              L"Format heure"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Alerte de fuite haute"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Alerte de press.haute"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Skjermlys"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Lysstyrke"
#define TXT_DEV_KEY_SOUND                L"Tastelyd"
#define TXT_DEV_TIME_FORMAT              L"Tidsformat"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Varsel Høy Lekkasje"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Varsel Høyt Trykk"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Skärmljus"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Ljusstyrka"
#define TXT_DEV_KEY_SOUND                L"Knappljud"
#define TXT_DEV_TIME_FORMAT              L"Tidsformat"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Läckagevarning"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Högtrycksvarning"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Display Light"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Light Intensity"
#define TXT_DEV_KEY_SOUND                L"Key Sound"
#define TXT_DEV_TIME_FORMAT              L"Time Format"
#define TXT_DEV_HIGH_LEAK_ALERT          L"High Leakage Alert"
#define TXT_DEV_HIGH_PRESS_ALERT         L"High Pressure Alert"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L""
#define TXT_DEV_SET_LIGHT_INTENSITY      L""
#define TXT_DEV_KEY_SOUND                L""
#define TXT_DEV_TIME_FORMAT              L""
#define TXT_DEV_HIGH_LEAK_ALERT          L""
#define TXT_DEV_HIGH_PRESS_ALERT         L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Schermverlichting"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Lichtintensiteit"
#define TXT_DEV_KEY_SOUND                L"Toetsgeluid"
#define TXT_DEV_TIME_FORMAT              L"Tijdaanduiding"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Waarschuwing Groot Lek"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Waarshuwing Hoge Druk"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Illuminazione display"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Intensit?illuminazione"
#define TXT_DEV_KEY_SOUND                L"Allarme sonoro"
#define TXT_DEV_TIME_FORMAT              L"Formato ora"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Avviso alta perdita"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Avviso alta press"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"\x0388\x03BD\x03B4\x03B5\x03B9\x03BE\x03B7 \x03C6\x03C9\x03C4\x03B9\x03C3\x03BC\x03BF\x03CD"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"\x0388\x03BD\x03C4\x03B1\x03C3\x03B7 \x03C6\x03C9\x03C4\x03B9\x03C3\x03BC\x03BF\x03CD"
#define TXT_DEV_KEY_SOUND                L"\x03A1\x03CD\x03B8\x03BC\x03B9\x03C3\x03B7 \x03AD\x03BD\x03C4\x03B1\x03C3\x03B7\x03C2"
#define TXT_DEV_TIME_FORMAT              L"\x03A1\x03CD\x03B8\x03BC\x03B9\x03C3\x03B7 \x03CE\x03C1\x03B1\x03C2"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Y\x03C8\x03B7\x03BB\x03AE \x03B4\x03B9\x03B1\x03C1\x03C1\x03BF\x03AE"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Y\x03C8\x03B7\x03BB\x03AE \x03C0\x03AF\x03B5\x03C3\x03B7"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Luz do Display"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Intensidade da Luz"
#define TXT_DEV_KEY_SOUND                L"Som do Teclado"
#define TXT_DEV_TIME_FORMAT              L"Formato da Hora"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Fuga elevada"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Pressão Elevada"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"Jasno\x015B\x0107"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"Kontrast"
#define TXT_DEV_KEY_SOUND                L"D\x017Awi\x0119k"
#define TXT_DEV_TIME_FORMAT              L"Format czasu"
#define TXT_DEV_HIGH_LEAK_ALERT          L"Ostrze"L"\x017C"L". przecieku"
#define TXT_DEV_HIGH_PRESS_ALERT         L"Ostrze"L"\x017C"L". wysok. ci\x015B."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"\x30D0\x30C3\x30AF\x30E9\x30A4\x30C8"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"\x660E\x308B\x3055"
#define TXT_DEV_KEY_SOUND                L"\x30DC\x30BF\x30F3\x97F3"
#define TXT_DEV_TIME_FORMAT              L"\x6642\x9593\x5F62\x5F0F"
#define TXT_DEV_HIGH_LEAK_ALERT          L"\x9AD8\x30EA\x30FC\x30AF\x8B66\x544A"
#define TXT_DEV_HIGH_PRESS_ALERT         L"\x9AD8\x5727\x8B66\x544A"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"\x80CC\x5149\x706F"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"\x4EAE\x5EA6"
#define TXT_DEV_KEY_SOUND                L"\x6309\x952E\x97F3"
#define TXT_DEV_TIME_FORMAT              L"\x65F6\x95F4\x683C\x5F0F"
#define TXT_DEV_HIGH_LEAK_ALERT          L"\x9AD8\x6F0F\x6C14\x91CF\x8B66\x544A"
#define TXT_DEV_HIGH_PRESS_ALERT         L"\x538B\x529B\x8FC7\x9AD8\x8B66\x544A"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_DEV_SET_DISPLAY_LIGHT        L"abcdefghijklmnop"
#define TXT_DEV_SET_LIGHT_INTENSITY      L"abcdefghijklmnop"
#define TXT_DEV_KEY_SOUND                L"abcdefghijklmnop"
#define TXT_DEV_TIME_FORMAT              L"abcdefghijklmnop"
#define TXT_DEV_HIGH_LEAK_ALERT          L"abcdefghijklmnop"
#define TXT_DEV_HIGH_PRESS_ALERT         L"abcdefghijklmnop"

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

#endif  // DEVICESETTINGS_DEFINE_H

