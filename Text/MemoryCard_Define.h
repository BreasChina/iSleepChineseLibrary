#ifndef MEMORYCARD_DEFINE_H
#define MEMORYCARD_DEFINE_H
/******************************************************************************
** File name    :        MemoryCard_Define.h
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
#define IX_MEM_CARD_SAVE_LOG_SET     0
#define IX_MEM_CARD_SAVE_SET         1
#define IX_MEM_CARD_LOAD_SET         2
#define IX_MEM_CARD_ERASE_LOG        3
#define IX_MEM_CARD_SAVE_LOG_SET_Q   4
#define IX_MEM_CARD_SAVE_LOG_SET_P   5
#define IX_MEM_CARD_SAVE_LOG_SET_D   6
#define IX_MEM_CARD_SAVE_SET_Q       7
#define IX_MEM_CARD_SAVE_SET_P       8
#define IX_MEM_CARD_SAVE_SET_D       9
#define IX_MEM_CARD_LOAD_SET_Q      10
#define IX_MEM_CARD_LOAD_SET_P      11
#define IX_MEM_CARD_LOAD_SET_D      12
#define IX_MEM_CARD_ERASE_LOG_Q     13
#define IX_MEM_CARD_ERASE_LOG_P     14
#define IX_MEM_CARD_ERASE_LOG_D     15
#define IX_MEM_CARD_NO_CARD         16
#define IX_MEM_CARD_CRC_ERR         17
#define IX_MEM_CARD_SER_MISS        18
#define IX_MEM_CARD_ERROR           19
#define NO_MEM_CARD_STRINGS         20
/*--------------------------------------------------------------------*/
#if CURRENT_LANGUAGE == LANGUAGE_ES // Spanish
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Salvar dat/aj en tarjeta"
#define TXT_MEM_CARD_SAVE_SET        L"Salvar ajustes en tarjeta"
#define TXT_MEM_CARD_LOAD_SET        L"Cargar ajustes de la tarjeta"
#define TXT_MEM_CARD_ERASE_LOG       L"Borrar datos"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"¿Quiere salvar listados y ajustes en la tarjeta de memoria?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Salvando en tarjeta de memoria."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Listados y ajustes salvados en tarjeta de memoria."
#define TXT_MEM_CARD_SAVE_SET_Q      L"¿Quiere salvar ajustes en tarjeta de memoria?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Salvando en tarjeta de memoria."
#define TXT_MEM_CARD_SAVE_SET_D      L"Ajustes salvados en tarjeta de memoria."
#define TXT_MEM_CARD_LOAD_SET_Q      L"¿Quiere cargar ajustes de la tarjeta de memoria?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Estan cargandose los ajustes."
#define TXT_MEM_CARD_LOAD_SET_D      L"Ajustes cargados de la tarjeta de memoria."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"¿Desea borrar los datos?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Borrando datos."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Datos borrados."
#define TXT_MEM_CARD_NO_CARD         L"¡Sin tarjeta de memoria!"
#define TXT_MEM_CARD_CRC_ERR         L"Archivo incorrecto (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Error numero de serie."
#define TXT_MEM_CARD_ERROR           L"Comprobar tarjeta de memoria"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FI // Finnish
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Tallenna logit/asetukset"
#define TXT_MEM_CARD_SAVE_SET        L"Tallenna asetukset"
#define TXT_MEM_CARD_LOAD_SET        L"Pura asetukset"
#define TXT_MEM_CARD_ERASE_LOG       L"Laitelokin tyhjennys"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Haluatko tallentaa logit ja asetukset muistikortille?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Tallennus muistikortille."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Logit ja asetukset  tallennettu muistikortille."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Haluatko tallentaa asetukset muistikortille?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Tallennus muistikortille."
#define TXT_MEM_CARD_SAVE_SET_D      L"Asetukset tallennettu muistikortille."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Haluatko purkaa asetukst muistikortilta?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Asetukset purettu."
#define TXT_MEM_CARD_LOAD_SET_D      L"Asetukset purettu muistikortilta."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Haluatko tyhjentää Laitelokin?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Laiteloki tyhjennetään"
#define TXT_MEM_CARD_ERASE_LOG_D     L"Logitiedostot poistettu."
#define TXT_MEM_CARD_NO_CARD         L"Ei muistikorttia!"
#define TXT_MEM_CARD_CRC_ERR         L"Tiedosto virheellinen (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Sarjanro ei täsmää."
#define TXT_MEM_CARD_ERROR           L"Tarkasta muistikortti."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DE // German
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Log/Einst. speichern"
#define TXT_MEM_CARD_SAVE_SET        L"Einstellungen speichern"
#define TXT_MEM_CARD_LOAD_SET        L"Einstellungen laden"
#define TXT_MEM_CARD_ERASE_LOG       L"Löschen der Logs im Gerät"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Möchten Sie Log und Einstellungen auf Karte speichern?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Speichern auf Karte."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Log und Einstellungen auf Karte gespeichert."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Möchten Sie die Einstellungen auf Karte speichern?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Speichern auf Karte."
#define TXT_MEM_CARD_SAVE_SET_D      L"Einstellungen auf Karte gespeichert."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Möchten Sie die Einstellungen von der Karte laden?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Laden der Einstellungen."
#define TXT_MEM_CARD_LOAD_SET_D      L"Einstellungen von Karte geladen."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Möchten Sie die Logs im Gerät löschen?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Löschen der Logs."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Gerätelogs gelöscht."
#define TXT_MEM_CARD_NO_CARD         L"Keine Karte!"
#define TXT_MEM_CARD_CRC_ERR         L"Datei fehlerhaft (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Seriennummer falsch."
#define TXT_MEM_CARD_ERROR           L"Karte überprüfen."
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_DK // Danish
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Gem memory/indst.p?kort"
#define TXT_MEM_CARD_SAVE_SET        L"Gem indst. P?kort"
#define TXT_MEM_CARD_LOAD_SET        L"Hent indst. Fra kort"
#define TXT_MEM_CARD_ERASE_LOG       L"Slet hukommelse"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Vil du gemme log og indstillinger p?memorykortet?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Gemmer p?memory kort."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Log og indst. Gemt p?memorykort."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Vil du gemme indstillinger p?memorykortet?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Gemmer p?memory kort."
#define TXT_MEM_CARD_SAVE_SET_D      L"Indstillinger gemt p?memory kort."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Vil du hente indstillinger fra memorykortet?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Indstillinger loades."
#define TXT_MEM_CARD_LOAD_SET_D      L"Indstillinger er hentet fra memorykortet."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Vil du virkelig slette hukommelsen?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Sletter nu hukommelsen."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Hukommelse slettet."
#define TXT_MEM_CARD_NO_CARD         L"Ingen memorykort!"
#define TXT_MEM_CARD_CRC_ERR         L"Fil defekt (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Serienummer passer ikke."
#define TXT_MEM_CARD_ERROR           L"Check memorykort."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_FR // French
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Copie mém/régl sur carte"
#define TXT_MEM_CARD_SAVE_SET        L"Copie réglages sur carte"
#define TXT_MEM_CARD_LOAD_SET        L"Charge régl depuis carte"
#define TXT_MEM_CARD_ERASE_LOG       L"Effacer la mémoire de l'appareil"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Voulez-vous sauvegarder les données et les réglages sur la carte?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Sauvegarde sur la carte en cours."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Données et réglages sauvegardés sur la carte."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Voulez-vous sauvegarder les réglages sur la carte?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Sauvegarde sur la carte en cours."
#define TXT_MEM_CARD_SAVE_SET_D      L"Réglages sauvegardés sur la carte."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Voulez-vous charger les réglages depuis la carte?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Chargement des réglages en cours."
#define TXT_MEM_CARD_LOAD_SET_D      L"Réglages chargés depuis la carte."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Effacer la mémoire de l'appareil?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Effaçage la mémoire en cours."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Mémoire de l'appareil effacée."
#define TXT_MEM_CARD_NO_CARD         L"Pas de carte mémoire!"
#define TXT_MEM_CARD_CRC_ERR         L"Fichier incorrect (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"N?de série non correspondant."
#define TXT_MEM_CARD_ERROR           L"Vérifier carte mémoire."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NO // Norway
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Lagre log/innst. p?kort"
#define TXT_MEM_CARD_SAVE_SET        L"Lagre innstillinger p?kort."
#define TXT_MEM_CARD_LOAD_SET        L"Laste innstillinger fra kort."
#define TXT_MEM_CARD_ERASE_LOG       L"Slett apparat log"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Ønsker du ?lagre log og innstillinger p?minnekort?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Lagrer p?minnekort."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Log og innstillinger lagret p?minnekort."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Ønsker du ?lagre innstillinger p?minnekort?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Lagre p?minnekort."
#define TXT_MEM_CARD_SAVE_SET_D      L"Innstillinger lagret p?minnekort."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Ønsker du ?laste innstillinger fra minnekort?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Innstillinger lastes."
#define TXT_MEM_CARD_LOAD_SET_D      L"Innstillinger lastet fra minnekort."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Vil du slette apparat log?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Sletter apparat log."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Apparat log slettet."
#define TXT_MEM_CARD_NO_CARD         L"Ingen minnekort!"
#define TXT_MEM_CARD_CRC_ERR         L"File ukorrekt (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Serienummer stemmer ikke."
#define TXT_MEM_CARD_ERROR           L"Sjekk minnekort."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_SE // Swedish
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Spara logg/inst. p?kort"
#define TXT_MEM_CARD_SAVE_SET        L"Spara inställningar p?kort"
#define TXT_MEM_CARD_LOAD_SET        L"Ladda inst. från kort"
#define TXT_MEM_CARD_ERASE_LOG       L"Radera maskinlogg"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Vill du spara logg och inställningar p?minneskortet?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Sparar p?minneskortet."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Logg och inställningar är sparade p?kortet."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Vill du spara inställningar p?minneskortet?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Sparar p?minneskortet."
#define TXT_MEM_CARD_SAVE_SET_D      L"Inställningar sparade p?minneskortet."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Vill du ladda ner inställningar från minneskortet?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Inställningar laddas ner."
#define TXT_MEM_CARD_LOAD_SET_D      L"Inställningar nedladdade från minneskortet."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Vill du radera maskinloggen?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Raderar maskinlogg."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Maskinlogg raderad."
#define TXT_MEM_CARD_NO_CARD         L"Inget minneskort!"
#define TXT_MEM_CARD_CRC_ERR         L"Filen felaktig (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Serienummer överensstämmer inte."
#define TXT_MEM_CARD_ERROR           L"Kontrollera minneskortet"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_UK  // United kingdom
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET     L"Save log/settings on card"
#define TXT_MEM_CARD_SAVE_SET         L"Save settings on card"
#define TXT_MEM_CARD_LOAD_SET         L"Load settings from card"
#define TXT_MEM_CARD_ERASE_LOG        L"Erase device log"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L"Do you want to save log and settings on memory card?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L"Saving on memory card."
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L"Log and settings saved on memory card."
#define TXT_MEM_CARD_SAVE_SET_Q       L"Do you want to save settings on memory card?"
#define TXT_MEM_CARD_SAVE_SET_P       L"Saving on memory card."
#define TXT_MEM_CARD_SAVE_SET_D       L"Settings saved on memory card."
#define TXT_MEM_CARD_LOAD_SET_Q       L"Do you want to load settings from memory card?"
#define TXT_MEM_CARD_LOAD_SET_P       L"Settings are loading."
#define TXT_MEM_CARD_LOAD_SET_D       L"Settings loaded from memory card."
#define TXT_MEM_CARD_ERASE_LOG_Q      L"Do you want to erase device log?"
#define TXT_MEM_CARD_ERASE_LOG_P      L"Erasing device log."
#define TXT_MEM_CARD_ERASE_LOG_D      L"Device log erased."
#define TXT_MEM_CARD_NO_CARD          L"No memory card!"
#define TXT_MEM_CARD_CRC_ERR          L"File incorrect (CRC)."
#define TXT_MEM_CARD_SER_MISS         L"Serial Number Mismatch."
#define TXT_MEM_CARD_ERROR            L"Check memory card."
/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_US // United State
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET     L""
#define TXT_MEM_CARD_SAVE_SET         L""
#define TXT_MEM_CARD_LOAD_SET         L""
#define TXT_MEM_CARD_ERASE_LOG        L""
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L""
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L""
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L""
#define TXT_MEM_CARD_SAVE_SET_Q       L""
#define TXT_MEM_CARD_SAVE_SET_P       L""
#define TXT_MEM_CARD_SAVE_SET_D       L""
#define TXT_MEM_CARD_LOAD_SET_Q       L""
#define TXT_MEM_CARD_LOAD_SET_P       L""
#define TXT_MEM_CARD_LOAD_SET_D       L""
#define TXT_MEM_CARD_ERASE_LOG_Q      L""
#define TXT_MEM_CARD_ERASE_LOG_P      L""
#define TXT_MEM_CARD_ERASE_LOG_D      L""
#define TXT_MEM_CARD_NO_CARD          L""
#define TXT_MEM_CARD_CRC_ERR          L""
#define TXT_MEM_CARD_SER_MISS         L""
#define TXT_MEM_CARD_ERROR            L""

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_NL // Dutch
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Bewaar log/instell op kaart"
#define TXT_MEM_CARD_SAVE_SET        L"Bewaar instellingen op kaart"
#define TXT_MEM_CARD_LOAD_SET        L"Laad instellingen vanaf kaart"
#define TXT_MEM_CARD_ERASE_LOG       L"Wis geheugen toestel"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Wil U log en instellingen op de kaart bewaren?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Bewaren op geheugenkaart."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Log en instellingen op kaart bewaard."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Wil U de instellingen op de kaart bewaren?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Bewaren op geheugenkaart."
#define TXT_MEM_CARD_SAVE_SET_D      L"Instellingen op kaart bewaard."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Wil U de instellingen vanaf de kaart opladen?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Instellingen worden opgeladen."
#define TXT_MEM_CARD_LOAD_SET_D      L"Instellingen opgeladen vanaf kaart."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Geheugen van het toestel wissen?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Geheugen toestel wissen."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Geheugen toestel gewist."
#define TXT_MEM_CARD_NO_CARD         L"Geen geheugenkaart!"
#define TXT_MEM_CARD_CRC_ERR         L"File niet correct (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Serienummer komt niet overeen."
#define TXT_MEM_CARD_ERROR           L"Controleer geheugenkaart."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_IT // Italy
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Salva reg/imp su card"
#define TXT_MEM_CARD_SAVE_SET        L"Salva impostazioni sulla card"
#define TXT_MEM_CARD_LOAD_SET        L"Carica impostazioni dalla card"
#define TXT_MEM_CARD_ERASE_LOG       L"Cancella memoria ventilatore"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Vuoi salvare registrazioni e impostazionisulla memory card?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Salvataggio sulla memory card."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Registrazioni e impostazioni salvate sulla memory card."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Vuoi salvare le impostazioni sulla memory card?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Salvataggio sulla memory card."
#define TXT_MEM_CARD_SAVE_SET_D      L"Impostazioni salvate sulla memory card."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Vuoi caricare le impostazioni dalla memory card?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Impostazioni caricate."
#define TXT_MEM_CARD_LOAD_SET_D      L"Impostazioni caricate dalla memory card."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Vuoi cancellare la memoria ventilatore?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Cancella memoria ventilatore."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Memoria ventilatore cancellata."
#define TXT_MEM_CARD_NO_CARD         L"Nessuna memory card inserita!"
#define TXT_MEM_CARD_CRC_ERR         L"File non corretto (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Errore nell'accoppiamento dei numeri di serie."
#define TXT_MEM_CARD_ERROR           L"Controlla la memory card."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_GR // Greek
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET     L"\x0391\x03C0\x03BF\x03B8 \x03B4\x03B5\x03B4/\x03C1\x03C5\x03B8\x03BC \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1"
#define TXT_MEM_CARD_SAVE_SET         L"\x0391\x03C0\x03BF\x03B8 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3. \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1"
#define TXT_MEM_CARD_LOAD_SET         L"\x039C\x03B5\x03C4\x03B1\x03C6 \x03C1\x03C5\x03B8\x03BC/\x03C9\x03BD \x03B1\x03C0\x03CC \x03BA\x03AC\x03C1\x03C4\x03B1"
#define TXT_MEM_CARD_ERASE_LOG        L"\x0394\x03B9\x03B1\x03B3\x03C1\x03B1\x03C6\x03B7\x0020\x03B4\x03B5\x03B4\x03BF\x03BC\x03B5\x03BD\x03C9\x03BD"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L"\x0398\x03AD\x03BB\x03B5\x03C4\x03B5 \x03BD\x03B1 \x03B1\x03C0\x03BF\x03B8\x03B7\x03BA\x03B5\x03CD\x03C3\x03B5\x03C4\x03B5 \x03C4\x03B1 \x03B4\x03B5\x03B4\x03BF\x03BC\x03AD\x03BD\x03B1 \x03BA\x03B1\x03B9 \x03C4\x03B9\x03C2 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2;"
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L"\x0391\x03C0\x03BF\x03B8\x03AE\x03BA\x03B5\x03C5\x03C3\x03B7 \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L"\x03A4\x03B1 \x03B4\x03B5\x03B4\x03BF\x03BC\x03AD\x03BD\x03B1 \x03BA\x03B1\x03B9 \x03BF\x03B9 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03B1\x03C0\x03BF\x03B8\x03B7\x03BA\x03B5\x03CD\x03C4\x03B7\x03BA\x03B1\x03BD \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"
#define TXT_MEM_CARD_SAVE_SET_Q       L"\x0398\x03AD\x03BB\x03B5\x03C4\x03B5 \x03BD\x03B1 \x03B1\x03C0\x03BF\x03B8\x03B7\x03BA\x03B5\x03CD\x03C3\x03B5\x03C4\x03B5 \x03C4\x03B9\x03C2 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2;"
#define TXT_MEM_CARD_SAVE_SET_P       L"\x0391\x03C0\x03BF\x03B8\x03AE\x03BA\x03B5\x03C5\x03C3\x03B7 \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"
#define TXT_MEM_CARD_SAVE_SET_D       L"\x039F\x03B9 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03B1\x03C0\x03BF\x03B8\x03B7\x03BA\x03B5\x03CD\x03C4\x03B7\x03BA\x03B1\x03BD \x03C3\x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"
#define TXT_MEM_CARD_LOAD_SET_Q       L"\x0398\x03AD\x03BB\x03B5\x03C4\x03B5 \x03BD\x03B1 \x03BC\x03B5\x03C4\x03B1\x03C6\x03AD\x03C1\x03B5\x03C4\x03B5 \x03C4\x03B9\x03C2 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03B1\x03C0\x03CC \x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2;"
#define TXT_MEM_CARD_LOAD_SET_P       L"\x039C\x03B5\x03C4\x03B1\x03C6\x03BF\x03C1\x03AC \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03C9\x03BD."
#define TXT_MEM_CARD_LOAD_SET_D       L"\x039F\x03B9 \x03C1\x03C5\x03B8\x03BC\x03AF\x03C3\x03B5\x03B9\x03C2 \x03BC\x03B5\x03C4\x03B1\x03C6\x03AD\x03C1\x03B8\x03B7\x03BA\x03B1\x03BD \x03B1\x03C0\x03CC \x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"
#define TXT_MEM_CARD_ERASE_LOG_Q      L"\x0398\x03B5\x03BB\x03B5\x03C4\x03B5\x0020\x03B4\x03B9\x03B1\x03B3\x03C1\x03B1\x03C6\x03B7\x0020\x03B4\x03B5\x03B4\x03BF\x03BC\x03B5\x03BD\x03C9\x03BD\x003F"
#define TXT_MEM_CARD_ERASE_LOG_P      L"\x0394\x03B9\x03B1\x03B3\x03C1\x03B1\x03C6\x03B7\x0020\x03B4\x03B5\x03B4\x03BF\x03BC\x03B5\x03BD\x03C9\x03BD"
#define TXT_MEM_CARD_ERASE_LOG_D      L"\x0394\x03B9\x03B1\x03B3\x03C1\x03AC\x03C6\x03B7\x03BA\x03B1\x03BD\x0020\x03BF\x03B9\x0020\x03BA\x03B1\x03C4\x03B1\x03C7\x03CE\x03C1\x03B9\x03C3\x03B5\x03B9\x03C2\x0020\x03C4\x03B7\x03C2\x0020\x03C3\x03C5\x03C3\x03BA\x03B5\x03C5\x03AE\x03C2"
#define TXT_MEM_CARD_NO_CARD          L"\x0394\x03B5\x03BD \x03C5\x03C0\x03AC\x03C1\x03C7\x03B5\x03B9 \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2!"
#define TXT_MEM_CARD_CRC_ERR          L"\x039B\x03AC\x03B8\x03BF\x03C2 \x03B1\x03C1\x03C7\x03B5\x03AF\x03BF"
#define TXT_MEM_CARD_SER_MISS         L"\x039B\x03AC\x03B8\x03BF\x03C2 Serial Number"
#define TXT_MEM_CARD_ERROR            L"\x0395\x03BB\x03AD\x03B3\x03BE\x03C4\x03B5 \x03C4\x03B7\x03BD \x03BA\x03AC\x03C1\x03C4\x03B1 \x03BC\x03BD\x03AE\x03BC\x03B7\x03C2"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PT // Portuguese
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET  	 L"Salvar log/ajuste-cartão"
#define TXT_MEM_CARD_SAVE_SET        L"Salvar ajustes cartão"
#define TXT_MEM_CARD_LOAD_SET        L"Baixar ajustes do cartão"
#define TXT_MEM_CARD_ERASE_LOG       L"Apagar log equipamento"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q  L"Vc quer salvar log e ajustes no cartão de memória?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P  L"Salvando no cartão de memória."
#define TXT_MEM_CARD_SAVE_LOG_SET_D  L"Log e ajustes salvos no cartão de memória."
#define TXT_MEM_CARD_SAVE_SET_Q      L"Vc quer salvar os ajustes no cartão de memória?"
#define TXT_MEM_CARD_SAVE_SET_P      L"Salvando no cartão de memória."
#define TXT_MEM_CARD_SAVE_SET_D      L"Ajustes salvos no cartão de memória."
#define TXT_MEM_CARD_LOAD_SET_Q      L"Vc quer baixar os ajustes do cartão de memória?"
#define TXT_MEM_CARD_LOAD_SET_P      L"Baixando os ajustes."
#define TXT_MEM_CARD_LOAD_SET_D      L"Ajustes baixados do cartão de memória."
#define TXT_MEM_CARD_ERASE_LOG_Q     L"Voc?quer apagar o log equipamento?"
#define TXT_MEM_CARD_ERASE_LOG_P     L"Apagando log equipamento."
#define TXT_MEM_CARD_ERASE_LOG_D     L"Log equipamento apagado."
#define TXT_MEM_CARD_NO_CARD         L"Sem cartão de memória!"
#define TXT_MEM_CARD_CRC_ERR         L"Arquivo incorreto (CRC)."
#define TXT_MEM_CARD_SER_MISS        L"Número de Série Não Confere."
#define TXT_MEM_CARD_ERROR           L"Cheque cartão de memória."

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_PL // Polisk
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET     L"Zachowaj na karcie"
#define TXT_MEM_CARD_SAVE_SET         L"Zachowaj ustawienia na karcie"
#define TXT_MEM_CARD_LOAD_SET         L"\x0141"L"aduj ustawienia z karty"
#define TXT_MEM_CARD_ERASE_LOG        L"Usuwanie pami\x0119"L"ci"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L"Czy chcesz zapami\x0119ta\x0107 rejestr/ustawienia na karcie pami\x0119"L"ci"
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L"Zapami\x0119tywanie na karcie pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L"Rejestr/ustawienia zapami\x0119tane na karcie pami\x0119"L"ci"
#define TXT_MEM_CARD_SAVE_SET_Q       L"Czy chcesz zapami\x0119ta\x0107 ustawienia na karcie pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_SAVE_SET_P       L"Zapami\x0119tywanie na karcie pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_SAVE_SET_D       L"Ustawienia zapami\x0119tane na karcie pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_LOAD_SET_Q       L"Czy chcesz zainstalowa\x0107 ustawienia z karty pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_LOAD_SET_P       L"Ustawienia zainstalowane"
#define TXT_MEM_CARD_LOAD_SET_D       L"Ustawienia zainstalowane z karty pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_ERASE_LOG_Q      L"Usun\x0105\x0107 pami\x0119\x0107 aparatu?"
#define TXT_MEM_CARD_ERASE_LOG_P      L"Usuwanie pami\x0119ci w toku"
#define TXT_MEM_CARD_ERASE_LOG_D      L"Pami\x0119\x0107 usuni\x0119ta"
#define TXT_MEM_CARD_NO_CARD          L"Brak karty pami"L"\x0119"L"ci"
#define TXT_MEM_CARD_CRC_ERR          L"Nieprawid\x0142owy plik"
#define TXT_MEM_CARD_SER_MISS         L"Pomylony numer seryjny"
#define TXT_MEM_CARD_ERROR            L"Sprawd\x017A kart\x0119 pami"L"\x0119"L"ci"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_JP  // Japan
/*--------------------------------------------------------------------*/
// NOTE A Carrage return carracter is insertet after the 10 character in some of the sentences.
// Because the whole sentence is one ord the GLDC cant center the text on the second row
#define TXT_MEM_CARD_SAVE_LOG_SET     L"\x5C65\x6B74\x3068\x8A2D\x5B9A\x3092\x4FDD\x5B58"
#define TXT_MEM_CARD_SAVE_SET         L"\x8A2D\x5B9A\x3092\x4FDD\x5B58"
#define TXT_MEM_CARD_LOAD_SET         L"\x8A2D\x5B9A\x3092\x8AAD\x307F\x8FBC\x3080"
#define TXT_MEM_CARD_ERASE_LOG        L"\x5C65\x6B74\x306E\x6D88\x53BB"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L"\x30AB\x30FC\x30C9\x306B\x5C65\x6B74\x3068\x8A2D\x5B9A\x3092\n\x4FDD\x5B58\x3057\x307E\x3059\x304B\xFF1F"
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L"\x30AB\x30FC\x30C9\x306B\x4FDD\x5B58\x4E2D"
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L"\x5C65\x6B74\x3068\x8A2D\x5B9A\x3092\x30AB\x30FC\x30C9\x306B\n\x4FDD\x5B58\x3057\x307E\x3057\x305F\x3002"
#define TXT_MEM_CARD_SAVE_SET_Q       L"\x30AB\x30FC\x30C9\x306B\x8A2D\x5B9A\x3092\x4FDD\x5B58\x3057\n\x307E\x3059\x304B\xFF1F"
#define TXT_MEM_CARD_SAVE_SET_P       L"\x30AB\x30FC\x30C9\x306B\x4FDD\x5B58\x4E2D"
#define TXT_MEM_CARD_SAVE_SET_D       L"\x8A2D\x5B9A\x3092\x30AB\x30FC\x30C9\x306B\x4FDD\x5B58\x3057\n\x307E\x3057\x305F\x3002"
#define TXT_MEM_CARD_LOAD_SET_Q       L"\x30AB\x30FC\x30C9\x304B\x3089\x8A2D\x5B9A\x3092\x8AAD\x307F\n\x8FBC\x307F\x307E\x3059\x304B\xFF1F"
#define TXT_MEM_CARD_LOAD_SET_P       L"\x8A2D\x5B9A\x3092\x8AAD\x307F\x8FBC\x307F\x4E2D"
#define TXT_MEM_CARD_LOAD_SET_D       L"\x30AB\x30FC\x30C9\x304B\x3089\x8A2D\x5B9A\x3092\x8AAD\x307F\n\x8FBC\x307F\x307E\x3057\x305F\x3002"
#define TXT_MEM_CARD_ERASE_LOG_Q      L"\x5C65\x6B74\x3092\x6D88\x53BB\x3057\x3066\x3082\x3044\x3044\n\x3067\x3059\x304B\x003F"
#define TXT_MEM_CARD_ERASE_LOG_P      L"\x5C65\x6B74\x3092\x6D88\x53BB\x3057\x3066\x3044\x307E\x3059"
#define TXT_MEM_CARD_ERASE_LOG_D      L"\x672C\x4F53\x5C65\x6B74\x306F\x6D88\x53BB\x3055\n\x308C\x307E\x3057\x305F"
#define TXT_MEM_CARD_NO_CARD          L"\x30AB\x30FC\x30C9\x304C\x898B\x3064\x304B\n\x308A\x307E\x305B\x3093\xFF01"
#define TXT_MEM_CARD_CRC_ERR          L"\x4E0D\x9069\x5207\x306A\x30D5\x30A1\x30A4\n\x30EB (CRC)"
#define TXT_MEM_CARD_SER_MISS         L"\x30B7\x30EA\x30A2\x30EB\x30CA\x30F3\x30D0\n\x30FC\x304C\x4E00\x81F4\x3057\x307E\x305B\x3093"
#define TXT_MEM_CARD_ERROR            L"\x30AB\x30FC\x30C9\x3092\x78BA\x8A8D"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_CN  // China
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET     L"\x4FDD\x5B58\x8BB0\x5F55\x8BBE\x7F6E\x5230\x5B58\x50A8\x5361"
#define TXT_MEM_CARD_SAVE_SET         L"\x4FDD\x5B58\x8BBE\x7F6E\x5230\x5B58\x50A8\x5361"
#define TXT_MEM_CARD_LOAD_SET         L"\x4ECE\x5B58\x50A8\x5361\x52A0\x8F7D\x8BBE\x7F6E"
#define TXT_MEM_CARD_ERASE_LOG        L"\x6E05\x9664\x8BBE\x5907\x8BB0\x5F55"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L"\x4FDD\x5B58\x8BB0\x5F55\x548C\x8BBE\x7F6E\x5230\x5B58\x50A8\x5361?"
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L"\x4FDD\x5B58\x4E2D"
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L"\x8BB0\x5F55\x548C\x8BBE\x7F6E\x5DF2\x4FDD\x5B58\x5230\x5B58\x50A8\x5361"
#define TXT_MEM_CARD_SAVE_SET_Q       L"\x4FDD\x5B58\x8BBE\x7F6E\x5230\x5B58\x50A8\x5361?"
#define TXT_MEM_CARD_SAVE_SET_P       L"\x4FDD\x5B58\x4E2D"
#define TXT_MEM_CARD_SAVE_SET_D       L"\x8BBE\x7F6E\x5DF2\x4FDD\x5B58\x5230\x5B58\x50A8\x5361"
#define TXT_MEM_CARD_LOAD_SET_Q       L"\x4ECE\x5B58\x50A8\x5361\x52A0\x8F7D\x8BBE\x7F6E?"
#define TXT_MEM_CARD_LOAD_SET_P       L"\x6B63\x5728\x52A0\x8F7D\x8BBE\x7F6E"
#define TXT_MEM_CARD_LOAD_SET_D       L"\x5DF2\x4ECE\x5B58\x50A8\x5361\x52A0\x8F7D\x8BBE\x7F6E"
#define TXT_MEM_CARD_ERASE_LOG_Q      L"\x6E05\x9664\x8BBE\x5907\x8BB0\x5F55?"
#define TXT_MEM_CARD_ERASE_LOG_P      L"\x6E05\x9664\x8BBE\x5907\x8BB0\x5F55\x4E2D"
#define TXT_MEM_CARD_ERASE_LOG_D      L"\x5DF2\x6E05\x9664\x8BBE\x5907\x8BB0\x5F55"
#define TXT_MEM_CARD_NO_CARD          L"\x65E0\x5B58\x50A8\x5361"
#define TXT_MEM_CARD_CRC_ERR          L"\x6587\x4EF6\x4E0D\x6B63\x786E(CRC)"
#define TXT_MEM_CARD_SER_MISS         L"\x5E8F\x5217\x53F7\x4E0D\x5339\x914D"
#define TXT_MEM_CARD_ERROR            L"\x8BF7\x68C0\x67E5\x5B58\x50A8\x5361"

/*--------------------------------------------------------------------*/
#elif CURRENT_LANGUAGE == LANGUAGE_TEST // Test
/*--------------------------------------------------------------------*/
#define TXT_MEM_CARD_SAVE_LOG_SET     L"abcdefghijklmnopqrstuvwx"
#define TXT_MEM_CARD_SAVE_SET         L"abcdefghijklmnopqrstuvwx"
#define TXT_MEM_CARD_LOAD_SET         L"abcdefghijklmnopqrstuvwx"
#define TXT_MEM_CARD_ERASE_LOG        L"abcdefghijklmnopqrstuvwx"
#define TXT_MEM_CARD_SAVE_LOG_SET_Q   L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_SAVE_LOG_SET_P   L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_SAVE_LOG_SET_D   L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_SAVE_SET_Q       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_SAVE_SET_P       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_SAVE_SET_D       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_LOAD_SET_Q       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_LOAD_SET_P       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_LOAD_SET_D       L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_ERASE_LOG_Q      L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_ERASE_LOG_P      L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_ERASE_LOG_D      L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_NO_CARD          L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_CRC_ERR          L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_SER_MISS         L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?
#define TXT_MEM_CARD_ERROR            L"abcdefghijklmnopqrstuvwxyzåäöabcdefghijklmnopqrstuvwxyzåä?

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

#endif  // MEMORYCARD_DEFINE_H

