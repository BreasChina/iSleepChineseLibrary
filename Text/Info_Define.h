#ifndef INFO_DEFINE_H
#define INFO_DEFINE_H
/******************************************************************************
** File name    :        Info_Define.h
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
#define IX_INFO_TEXT_ERROR         0
#define IX_INFO_TEXT_ERROR_CODE    1
#define IX_INFO_TEXT_HUM_DISC      2
#define IX_INFO_TEXT_HUM_LOW_TEMP  3
#define IX_INFO_TEXT_HUM_HIGH_TEMP 4
#define IX_INFO_TEXT_SETTINGS      5
#define IX_INFO_TEXT_HIGH_LEAKAGE  6
#define IX_INFO_TEXT_CHECK_POW_SUP 7
#define IX_INFO_TEXT_HIGH_TEMP     8
#define IX_INFO_TEXT_INT_FAIL      9
#define IX_INFO_TEXT_HIGH_PRESS_ALERT  10
#define IX_INFO_TEXT_HIGH_LEAK_ALERT   11

#define NO_INFO_STRINGS            12
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Error"
#define TXT_INFO_TEXT_ERROR_CODE     L"Codigo error:"
#define TXT_INFO_TEXT_HUM_DISC       L"Humidificador desconectado."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Baja temperatura humidificador. Comprobar humidificador."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Alta temperatura humidificador. Comprobar humidificador."
#define TXT_INFO_TEXT_SETTINGS       L"Error parametros guardados. Volver a parametros por defecto."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Fuga alta. Comprobar mascarilla."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Comprobar alimentacion."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Alta temperatura. Enfriar equipo y comenzar."
#define TXT_INFO_TEXT_INT_FAIL       L"Fallo funcion interna. Contactar servicio."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"ALTA PRESION"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"FUGA ALTA"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Virhe"
#define TXT_INFO_TEXT_ERROR_CODE     L"Virhekoodi:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Kostuttaja irronnut."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Matala kostutuslämpötila. Tarkasta kostuttaja."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Korkea kostutuslämpötila.arkasta kostuttaja."
#define TXT_INFO_TEXT_SETTINGS       L"Asetukset hukattu. Paluu tehdasasetuksiin."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Suuri vuoto. Tarkasta maski."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Tarkasta virransaanti."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Korkea lämpötila. Jäähdytäja starttaa."
#define TXT_INFO_TEXT_INT_FAIL       L"Sisäinen vika. Yhteys maahantuojaan."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"Korkea paine"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"Iso vuoto"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Fehler"
#define TXT_INFO_TEXT_ERROR_CODE     L"Fehlermeldung:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Befeuchter entfernt."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Niedrige Befeuchtertemperatur. Befeuchter prüfen."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Hohe Befeuchtertemperatur. Befeuchter prüfen."
#define TXT_INFO_TEXT_SETTINGS       L"Gespeicherte Einstellungen korrupt. Zurück zu Standardeinstellungen."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Hohe Leckage während Sitzung. Maske prüfen."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Spannungsversorgung prüfen."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Hohe Temperatur. Gerät abkühlen lassen und neu starten."
#define TXT_INFO_TEXT_INT_FAIL       L"Interner Fehler. Kundendienst kontaktieren."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"DRUCK HOCH"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"LECKAGE HOCH"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Fejl"
#define TXT_INFO_TEXT_ERROR_CODE     L"Fejl kode:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Fugter frakoblet"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Lav temperatur i fugter, check fugter."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Høj temperatur i fugter, check fugter."
#define TXT_INFO_TEXT_SETTINGS       L"Gemte indstillinger ikke korrekte,er returneret til default indstillinger."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Høj lækage, check maske."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Check strømtilslutning."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Høj brugstemperatur. Sluk apparat, lad det afkøle og genstart."
#define TXT_INFO_TEXT_INT_FAIL       L"Internt funktionsfejl. Kontakt forhandler."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"HØJ TRYK"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"Høj lækage"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Erreur"
#define TXT_INFO_TEXT_ERROR_CODE     L"Code erreur:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Humidificateur déconnect?"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Niveau humidification faible. Vérifiez l'humidificateur."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Niveau humidification élev? Vérifiez l'humidificateur."
#define TXT_INFO_TEXT_SETTINGS       L"Réglages corrompus. Retour aux Réglages des paramètres par défaut."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Fuites élévées lors de la dernière utilisation. Vérifiez le masque."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Vérifiez les sources d'alimentation électrique."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Surchauffe de l'appareil. Rallumez votre appareil après refroidissement."
#define TXT_INFO_TEXT_INT_FAIL       L"Défaut interne. Contactez votre prestataire de service."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"PRESSION HAUTE"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"FUITE HAUTE"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Feil"
#define TXT_INFO_TEXT_ERROR_CODE     L"Feil kode:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Fukter frakoblet."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Lav temperatur p?fukter. Sjekk fukteren."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Høy temperatur p?fukter. Sjekk fukteren."
#define TXT_INFO_TEXT_SETTINGS       L"Lagrede innstillinger er slettet. G?tilbake til standard innstillinger."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Høy lekkasje under bruk. Sjekk masken"
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Sjekk strømkildene."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Høy temperatur. Avkjøl apparatet og start p?nytt."
#define TXT_INFO_TEXT_INT_FAIL       L"Intern funksjonsfeil. Kontakt servicepersonell."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"HØYT TRYKK"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"HØY LEKKASE"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Fel"
#define TXT_INFO_TEXT_ERROR_CODE     L"Felkod:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Luftfuktaren är frånkopplad."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Låg befuktartemperatur. Kontrollera luftfuktaren."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Hög befuktartemperatur. Kontrollera luftfuktaren."
#define TXT_INFO_TEXT_SETTINGS       L"Lagrade inställningar felaktiga. Använder förinställda värden."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Högt läckage under sessionen. Kontrollera masken."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Kontrollera strömförsörjningen."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Hög temperatur. Låt maskinen svalna och starta igen."
#define TXT_INFO_TEXT_INT_FAIL       L"Internt funktionsfel. Kontakta din klinik."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"HÖGT TRYCK"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"HÖGT LÄCKAGE"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Error"
#define TXT_INFO_TEXT_ERROR_CODE     L"Error code:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Humidifier disconnected."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Low humidifier temperature. Check humidifier."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"High humidifier temperature. Check humidifier."
#define TXT_INFO_TEXT_SETTINGS       L"Stored settings corrupt. Returned to default settings."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"High leakage during session. Check mask."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Check power supplies."
#define TXT_INFO_TEXT_HIGH_TEMP      L"High temperature. Cool the device and restart."
#define TXT_INFO_TEXT_INT_FAIL       L"Internal function failure. Contact your provider."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"HIGH PRESSURE"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"HIGH LEAKAGE"
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L""
#define TXT_INFO_TEXT_ERROR_CODE     L""
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L""
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L""
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L""
#define TXT_INFO_TEXT_SETTINGS       L""
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L""
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L""
#define TXT_INFO_TEXT_HIGH_TEMP      L""
#define TXT_INFO_TEXT_INT_FAIL       L""
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L""
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Fout"
#define TXT_INFO_TEXT_ERROR_CODE     L"Foutcode:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Disconnectie bevochtiger."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Lage temp. Controleer bevochtiger."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Hoge temp.Controleer bevochtiger."
#define TXT_INFO_TEXT_SETTINGS       L"Fout bij instellingen. Terug naar fabrieksinstelling."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Grote Lekkage tijdens sessie. Controleer masker."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Controleer stroomtoevoer."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Hoge temp. Laat toestel afkoelen en herstart."
#define TXT_INFO_TEXT_INT_FAIL       L"Interne functiefout. Contacteer uw leverancier."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"HOGE DRUK"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"GROOT LEK"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Errore"										
#define TXT_INFO_TEXT_ERROR_CODE     L"Codice errore:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Umidificatore scollegato."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Bassa temperatura dell'umidificatore. Controllare umidificatore."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Alta temperatura dell'umidificatore. Controllare umidificatore."
#define TXT_INFO_TEXT_SETTINGS       L"Perdita memoria delle impostazioni. Ritorno alle impostazioni di default."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Alta perdita. Controllare la maschera."										
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Controllare la fonte di alimentazione"
#define TXT_INFO_TEXT_HIGH_TEMP      L"Alta temperatura. Raffreddare lo strumento e riavviarlo."
#define TXT_INFO_TEXT_INT_FAIL       L"Errore interno. Contattare il fornitore."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"ALTA PRESSIONE"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"ALTA PERDITA"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"\x039B\x03AC\x03B8\x03BF\x03C2"
#define TXT_INFO_TEXT_ERROR_CODE     L"\x039A\x03C9\x03B4\x03B9\x03BA\x03CC\x03C2 \x03BB\x03AC\x03B8\x03BF\x03C5\x03C2"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"\x0391\x03C0\x03BF\x03C3\x03CD\x03BD\x03B4\x03B5\x03C3\x03B7 \x03C5\x03B3\x03C1\x03B1\x03BD\x03C4\x03AE\x03C1\x03B1"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"\x03A7\x03B1\x03BC\x03B7\x03BB\x03AE \x03B8\x03B5\x03C1\x03BC\x03BF\x03BA\x03C1\x03B1\x03C3\x03AF\x03B1 \x03C5\x03B3\x03C1\x03B1\x03BD\x03C4\x03AE\x03C1\x03B1. \x0395\x03BB\x03AD\x03B3\x03BE\x03C4\x03B5 \x03C4\x03BF\x03BD \x03C5\x03B3\x03C1\x03B1\x03BD\x03C4\x03AE\x03C1\x03B1"
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"\x03A5\x03C8\x03B7\x03BB\x03AE \x03B8\x03B5\x03C1\x03BC\x03BF\x03BA\x03C1\x03B1\x03C3\x03AF\x03B1 \x03C5\x03B3\x03C1\x03B1\x03BD\x03C4\x03AE\x03C1\x03B1. \x0395\x03BB\x03AD\x03B3\x03BE\x03C4\x03B5 \x03C4\x03BF\x03BD \x03C5\x03B3\x03C1\x03B1\x03BD\x03C4\x03AE\x03C1\x03B1"
#define TXT_INFO_TEXT_SETTINGS       L"\x0391\x03BB\x03BF\x03AF\x03C9\x03C3\x03B7 \x03B1\x03C0\x03BF\x03B8\x03B7\x03BA\x03B5\x03C5\x03BC\x03AD\x03BD\x03C9\x03BD \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03C9\x03BD. \x0395\x03C0\x03B9\x03C3\x03C4\x03C1\x03AD\x03C8\x03C4\x03B5 \x03C3\x03C4\x03B9\x03C2 \x03B1\x03C1\x03C7\x03B9\x03BA\x03AD\x03C2 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2"
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"\x03A5\x03C8\x03B7\x03BB\x03AE \x03B4\x03B9\x03B1\x03C1\x03C1\x03BF\x03AE \x03BA\x03B1\x03C4\x03AC \x03C4\x03B7\x03BD \x03C7\x03C1\x03AE\x03C3\x03B7. \x0395\x03BB\x03AD\x03B3\x03BE\x03C4\x03B5 \x03C4\x03B7 \x03BC\x03AC\x03C3\x03BA\x03B1."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"\x0395\x03BB\x03AD\x03B3\x03BE\x03C4\x03B5 \x03C4\x03B7\x03BD \x03C0\x03B1\x03C1\x03BF\x03C7\x03AE \x03C1\x03B5\x03CD\x03BC\x03B1\x03C4\x03BF\x03C2"
#define TXT_INFO_TEXT_HIGH_TEMP      L"\x03A5\x03C8\x03B7\x03BB\x03AE \x03B8\x03B5\x03C1\x03BC\x03BF\x03BA\x03C1\x03B1\x03C3\x03AF\x03B1. \x039A\x03BB\x03B5\x03AF\x03C3\x03C4\x03B5 \x03B3\x03B9\x03B1 \x03BB\x03AF\x03B3\x03BF \x03C4\x03B7 \x03C3\x03C5\x03C3\x03BA\x03B5\x03C5\x03AE \x03BA\x03B1\x03B9 \x03BE\x03B1\x03BD\x03B1\x03BD\x03BF\x03AF\x03BE\x03C4\x03B5 \x03C4\x03B7."
#define TXT_INFO_TEXT_INT_FAIL       L"\x0391\x03C0\x03BF\x03C4\x03C5\x03C7\x03AF\x03B1 \x03B5\x03C3\x03C9\x03C4\x03B5\x03C1\x03B9\x03BA\x03AE\x03C2 \x03BB\x03B5\x03B9\x03C4\x03BF\x03C5\x03C1\x03B3\x03AF\x03B1\x03C2. \x0395\x03C0\x03B9\x03BA\x03BF\x03B9\x03BD\x03C9\x03BD\x03AE\x03C3\x03C4\x03B5 \x03BC\x03B5 \x03C4\x03BF\x03BD \x03C0\x03C1\x03BF\x03BC\x03B7\x03B8\x03B5\x03C5\x03C4\x03AE \x03C3\x03B1\x03C2."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"\x03A5\x03C8\x03B7\x03BB\x03AE \x03C0\x03AF\x03B5\x03C3\x03B7"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"\x03A5\x03C8\x03B7\x03BB\x03AE \x03B4\x03B9\x03B1\x03C1\x03C1\x03BF\x03AE"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"Erro"
#define TXT_INFO_TEXT_ERROR_CODE     L"Codigo erro:"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Umidificador desconectado."
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Temperatura do umidificador baixa. Cheque o umidificador."
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Temperatura do umidificador alta. Cheque o umidificador."
#define TXT_INFO_TEXT_SETTINGS       L"Parametros ajustados corrompidos. Retorne ao parametros padrão."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Fuga elevada durante a sessão. Cheque a máscara."
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Cheque a fonte de energia."
#define TXT_INFO_TEXT_HIGH_TEMP      L"Temperatura alta. Resfrie o equipameno e reinicie."
#define TXT_INFO_TEXT_INT_FAIL       L"Falha de funcionamento interno. Contate o Suporte Técnico."
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"Pressão Elevada"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"Fuga elevada"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"B"L"\x0142\x0105"L"d"
#define TXT_INFO_TEXT_ERROR_CODE     L"Kod b"L"\x0142\x0119"L"du"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"Roz"L"\x0142\x0105"L"czony nawil"L"\x017C"L"acz"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"Niska temperatura nawil"L"\x017C"L"ania, sprawd\x017A nawil"L"\x017C"L"acz"
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"Wysoka temperatura nawil"L"\x017C"L"ania, sprawd\x017C nawil"L"\x017C"L"acz"
#define TXT_INFO_TEXT_SETTINGS       L"B\x0142\x0105"L"d ustawie\x0144. Powr\x00F3t do oryginalnych ustawie\x0144."
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"Du\x017Cy przeciek. Sprawd\x017A mask\x0119"
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"Sprawd\x017A zasilanie"
#define TXT_INFO_TEXT_HIGH_TEMP      L"Przegrzanie urz"L"\x0105"L"dzenia. Wy"L"\x0142\x0105"L"cz i w"L"\x0142\x0105"L"cz ponownie po wych\x0142odzeniu"
#define TXT_INFO_TEXT_INT_FAIL       L"Uszkodzone funkcje aparatu. Skontaktuj si\x0119 z serwisem"
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"Wysokie ci\x015Bnienie"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"Wysoki przeciek"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
// NOTE A Carrage return carracter is insertet after the 7th character in some of the sentences.
// Because the whole sentence is one ord the GLDC cant center the text on the second row
#define TXT_INFO_TEXT_ERROR          L"\x30A8\x30E9\x30FC"
#define TXT_INFO_TEXT_ERROR_CODE     L"\x30A8\x30E9\x30FC\x30B3\x30FC\x30C9\xFF1A"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"\x52A0\x6E7F\x5668\x672A\x88C5\x7740"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"\x4F4E\x52A0\x6E7F\x5668\x6E29\x5EA6\xFF1A\n\x52A0\x6E7F\x5668\x3092\x78BA\x8A8D"
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"\x9AD8\x52A0\x6E7F\x6C17\x6E29\x5EA6\xFF1A\n\x52A0\x6E7F\x5668\x3092\x78BA\x8A8D"
#define TXT_INFO_TEXT_SETTINGS       L"\x8A2D\x5B9A\x3092\x5931\x3044\x307E\x3057\x305F\xFF1A\n\x521D\x671F\x8A2D\x5B9A\x306B\x623B\x308A\x307E\x3059"
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"\x9AD8\x30EA\x30FC\x30AF\xFF1A\x30DE\x30B9\n\x30AF\x3092\x78BA\x8A8D"
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"\x96FB\x6E90\x3092\x78BA\x8A8D\x3057\x3066\n\x304F\x3060\x3055\x3044\x3002"
#define TXT_INFO_TEXT_HIGH_TEMP      L"\x30AA\x30FC\x30D0\x30FC\x30D2\x30FC\x30C8\xFF1A\x6642\n\x9593\x3092\x304A\x3044\x3066\x518D\x59CB\x52D5"
#define TXT_INFO_TEXT_INT_FAIL       L"\x5185\x90E8\x6A5F\x80FD\x969C\x5BB3\xFF1A\n\x30E1\x30FC\x30AB\x30FC\x306B\x9023\x7D61"
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"\x9AD8\x5727"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"\x9AD8\x30EA\x30FC\x30AF"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"\x9519\x8BEF"
#define TXT_INFO_TEXT_ERROR_CODE     L"\x9519\x8BEF\x7801"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"\x6E7F\x5316\x5668\x672A\x8FDE\x63A5"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"\x6E7F\x5316\x5668\x6E29\x5EA6\x8FC7\x4F4E \x8BF7\x68C0\x67E5\x6E7F\x5316\x5668"
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"\x6E7F\x5316\x5668\x6E29\x5EA6\x8FC7\x9AD8 \x8BF7\x68C0\x67E5\x6E7F\x5316\x5668"
#define TXT_INFO_TEXT_SETTINGS       L"\x5B58\x50A8\x7684\x8BBE\x7F6E\x635F\x574F \x5DF2\x8FD4\x56DE\x9ED8\x8BA4\x8BBE\x7F6E"
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"\x591C\x95F4\x6F0F\x6C14\x91CF\x8FC7\x5927 \x8BF7\x68C0\x67E5\x9762\x7F69"
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"\x8BF7\x68C0\x67E5\x7535\x6E90"
#define TXT_INFO_TEXT_HIGH_TEMP      L"\x8FC7\x70ED \x8BF7\x51B7\x5374\x8BBE\x5907\x5E76\x91CD\x65B0\x542F\x52A8"
#define TXT_INFO_TEXT_INT_FAIL       L"\x5185\x90E8\x529F\x80FD\x6545\x969C \x8BF7\x8054\x7CFB\x60A8\x7684\x670D\x52A1\x5546"
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L"\x538B\x529B\x8FC7\x9AD8"
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L"\x6F0F\x6C14\x91CF\x8FC7\x5927"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_INFO_TEXT_ERROR          L"abcdef"
#define TXT_INFO_TEXT_ERROR_CODE     L"abcdefghijklmnop"
// Info during treatment
#define TXT_INFO_TEXT_HUM_DISC       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
#define TXT_INFO_TEXT_HUM_LOW_TEMP   L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
#define TXT_INFO_TEXT_HUM_HIGH_TEMP  L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
#define TXT_INFO_TEXT_SETTINGS       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
// Info when there are no treatment, post treatment
#define TXT_INFO_TEXT_HIGH_LEAKAGE   L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
// Info treatment stoped
#define TXT_INFO_TEXT_CHECK_POW_SUP  L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
#define TXT_INFO_TEXT_HIGH_TEMP      L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
#define TXT_INFO_TEXT_INT_FAIL       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrs"
// Alert texts, new in iSleep 25
#define TXT_INFO_TEXT_HIGH_PRESS_ALERT  L""
#define TXT_INFO_TEXT_HIGH_LEAK_ALERT   L""

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

#endif  // INFO_DEFINE_H

