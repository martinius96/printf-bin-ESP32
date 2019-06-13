void setup() {
  Serial.begin(115200); //spustenie seriovej linky s rychlostou 115200
}
 
void loop() {
   Serial.println("Zijem!"); //Vypis textu do Serial monitoru
   delay(5000); //pozdrz program o () milisekund
  }
