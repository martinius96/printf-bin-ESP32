# Printf pre ESP32
# Nahratie programu
* Spustiť nahratie_programu.bat súbor
* V .bat súbore zmeniť COM port
* Pri nahrávaní - pripojení ESPToolu - držať EN, BOOT tlačidlo, pustiť EN.
* Počas nahrávania už je možné BOOT tlačidlo pustiť
* Po nahratí programu stlačiť EN
* Doska vypisuje každých 5 sekúnd na UART s baudrate 115200 hlášku Žijem!

# Vyčítanie programu
* Spustiť vycitanie_programu.bat súbor
* V bat. súbore zmeniť COM port
* Pri pripájaní ESPToolu stlačiť a držať EN a BOOT tlačidlo súčasne
* Vyčítavanie sketchu začne automaticky
* Výstup do flash_dump.bin

# Výstup programu
![Vystup programu](https://i.nahraj.to/f/2fCo.PNG)

# Nahrávanie programu cez ESPTool
![ESPTool nahravanie](https://i.nahraj.to/f/2fCB.PNG)

# Vyčítanie programu cez ESPTool
![ESPTool](https://i.nahraj.to/f/2fCA.PNG)
