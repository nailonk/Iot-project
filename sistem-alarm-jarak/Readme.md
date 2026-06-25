# Sistem Alarm Jarak (Ultrasonik & LED)

Dokumentasi ini berisi panduan rangkaian fisik (*wiring*) dan kode program untuk sistem deteksi jarak menggunakan Arduino Uno, Sensor Ultrasonik, dan LED. Sistem ini dirancang untuk mendeteksi objek yang mendekat dalam radius di bawah 20 cm.

---

## Daftar Komponen & Alat
1. **Arduino Uno**
2. **Sensor Ultrasonik RCWL-1601**
3. **Lampu LED** 
4. **Resistor 220 Ohm** 
5. **Breadboard**
6. **Kabel Jumper**

---

## Panduan Rangkaian (Wiring Diagram)

Hubungkan komponen-komponen di atas menggunakan breadboard sesuai dengan pemetaan pin berikut:

### 1. Jalur Daya Utama (Power)
* GND Arduino ➡️ Minus(-) di breadboard
* 5V Arduino ➡️ Plus(+) di breadboard

### 2. Sensor Ultrasonik
* VCC ➡️ Plus(+) di breadboard
* Trig ➡️ Pin D3 
* Echo ➡️ Pin D2
* GND ➡️ Minus(-) di breadboard
* *Note: Pin **OUT** pada sensor dibiarkan kosong (tidak digunakan).*

### 3. Lampu LED & Resistor
* Kaki Pendek LED (-) ➡️ Terhubung ke salah satu kaki Resistor 220 Ohm()
* Kaki Resistor lainnya ➡️ Minus (-) di breadboard
* Kaki Panjang LED (+) ➡️ Pin D13 Arduino

