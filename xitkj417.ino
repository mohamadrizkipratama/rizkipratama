/*
  Blink
  Menyalakan LED pada Pin 6 selama 3,5 detik dan Mematikanya selama 3,5 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 6;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 6.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(3500);               // Tunggu sampai 3,5 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(3500);               // Tunggu sampai 3,5 detik.
}