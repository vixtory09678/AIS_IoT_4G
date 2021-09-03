# AIS 4G Board Library for Arduino

 > ไลบารี่นี้อยู่ในระหว่างการพัฒนา ไม่แนะนำให้ใช้งานบน Production

AIS 4G Board บอร์ดเชื่อมต่ออินเตอร์เน็ตผ่าน 4G มาพร้อมกับไมโครคอนโทรลเลอร์ ESP32 และโมดูล SIM7600E-H1C รองรับการเชื่อมต่ออุปกรณ์ภายนอกผ่าน GPIO ทั้ง ESP32 และ SIM7600 รองรับการเชื่อมต่อ I2C/RS485/SPI/I2S/UART

ไลบารี่สำหรับ AIS 4G Board ใช้กับโปรแกรม ArduinoIDE รองรับการเชื่อมต่อ MQTT, HTTP, Azure IoT Hub, Azure IoT Central มาพร้อมคำสั่งอ่านพิกัดจาก GPS (บนโมดูล SIM7600) , อ่านค่าอุณหภูมิ/ความชื้นจากเซ็นเซอร์บนบอร์ด, ติดต่อกับอุปกรณ์ภายนอกผ่าน RS485 / ModbusRTU, บันทึกและเปิดไฟล์จาก MicroSD Card

-------

## สารบัญ

 * [รู้จัก AIS 4G Board]()
 * [สถานะการพัฒนา]()
 * [การเริ่มต้นใช้งาน]()
 * [การส่งข้อมูลขึ้น Azure IoT Central]()
 * [คำสั่งที่มีให้ใช้งาน]()
 * [ข้อมูลเพิ่มเติม]()

## รู้จัก AIS 4G Board

AIS 4G Board เป็นบอร์ดที่รวมไมโครคอนโทรลเลอร์ ESP32 (โมดูล WiFi/บลูทูธ) เข้ากับ SIM7600E-H1C (โมดูล 4G) รองรับการเชื่อมต่ออินเตอร์เน็ตเพื่อทำงานด้าน IoT ครบทุกรูปแบบการเชื่อมต่อ ทั้งผ่านเครือข่ายโทรศัพท์มือถือ (4G) , WiFi และบลูทูธ รองรับการอ่านค่าตำแหน่งปัจจุบันจาก GPS มีเซ็นเซอร์วัดอุณหภูมิและความชื้นบนบอร์ด มีปุ่มโปรแกรมได้อิสระ 1 ปุ่ม มีหลอดแอลอีดีโปรแกรมได้อิสระ 1 ดวง มีช่องเสียบ MicroSD Card มีช่องต่ออุปกรณ์ภายนอกผ่าน RS485 , I2C , SPI , UART

## สถานะการพัฒนา

ด้านซอฟแวร์

 - [x] คำสั่งเกี่ยวกับ GSM เบื้องต้น สั่งเปิด-ปิด
 - [x] คำสั่งเกี่ยวกับการเชื่อมต่อเครือข่าย
 - [x] คำสั่งเชื่อมต่อ TCP
 - [ ] คำสั่งเชื่อมต่อ UDP
 - [x] คำสั่งเชื่อมต่อ Azure IoT Hub
 - [x] คำสั่งเชื่อมต่อ Azure IoT Central
 - [x] คำสั่งอ่านค่าพิกัดจาก GPS
 - [ ] คำสั่งรับ-ส่งข้อมูลผ่าน RS485
   - [x] คำสั่งรับ-ส่งข้อมูลทั่วไป
   - [ ] คำสั่งรับ-ส่งข้อมูลด้วยโปรโตคอล MODBUS RTU
 - [x] คำสั่งอ่านค่าอุณหภูมิและความชื้นจากเซ็นเซอร์บนบอร์ด
 - [ ] คำสั่งจัดการไฟล์บน MicroSD Card
 - [ ] คำสั่ง สั่งงาน GPIO ของ SIM7600

ด้านฮาร์ดแวร์

 - [x] ทำต้นแบบรอบที่ 1
 - [ ] ผลิตสินค้าจริง
 - [ ] จำหน่ายทั่วไป
 - [ ] Azure Certified Device
   - [x] เตรียมข้อมูลดำเนินการยื่นขอ
   - [ ] อยู่ระหว่างการส่งข้อมูลยื่นขอ
   - [ ] อยู่ระหว่างรอตรวจสอบคำร้อง
   - [ ] ผ่านการรับรอง Azure Certified Device

## การเริ่มต้นใช้งาน

*อยู่ระหว่างการจัดทำข้อมูล*

## การส่งข้อมูลขึ้น Azure IoT Central

### เตรียมโค้ดโปรแกรม

 * ติดตั้งไลบารี่ AIS IoT 4G ตามหัวข้อ [การเริ่มต้นใช้งาน]()
 * ใช้ตัวอย่าง [IoT_Central_sample](https://github.com/gravitech-engineer/AIS_IoT_4G/blob/main/examples/Azure_IoT/IoT_Central_sample/IoT_Central_sample.ino) ในการทดสอบส่งข้อมูลอุณหภูมิและความชื้นจากเซ็นเซอร์บนบอร์ด ขึ้น Azure IoT Central

### สมัคร Azure และสร้างโปรเจค

 * สมัครสมาชิก https://portal.azure.com/ กดปุ่ม Start free แล้วสมัครสมาชิกพร้อมตั้งค่ารูปแบบการชำระเงินให้เรียบร้อย (ใช้งานครั้งแรกได้เครดิทฟรี $200 เป็นเวลา 7 วัน)
 * เข้าไปที่ https://apps.azureiotcentral.com/myapps กดสร้าง Custom app ตั้งชื้อ พร้อมตั้งค่าการชำระเงินให้เรียบร้อย

### สร้าง Device templates

 * เข้าไปที่ Device templates กดปุ่ม New แล้วดูตรง Create a custom device template ให้กดเลือก IoT Device ตั้งชื่อ แล้วดำเนินขั้นตอนจนจบ
 * เข้าไปที่ Device template ที่สร้างขึ้น สร้าง/ตั้งค่า Modal ดังนี้

| Display name | Name | Capability type | Semantic type |
|--|--|--|--|
| temperature | temperature | Telemetry | Temperature |
| humidity | humidity | Telemetry | Relative humidity |
| light | light | Command |   |

 * ของ light (ที่เป็น Command) ให้กดเปิดรายละเอียดขึ้นมา แล้ว
   * กดเปิดใช้ Request
   * Display name กำหนดเป็น Level
   * Name กำหนดเป็น level
   * Schema กำหนดเป็น Integer
 * แล้วกดปุ่ม Save ให้เรียบร้อย
 * กดที่เมนู Views แล้วกดเลือก Generate default views
 * ตั้งค่าหน้า Dashboard ย้ายตำแหน่งกราฟ-กล่องข้อความ เปลี่ยนชื่อได้ตามต้องการ แล้วกด Save
 * กด Back กลับมาหน้าจัดการ Device template กดปุ่ม Publish เพื่อให้นำ template ไปใช้ตอนสร้าง Device ได้

### สร้าง Device

 * เข้าไปที่เมนู Devices กดปุ่ม New
 * ตั้งชื่ออุปกรณ์ตรง Device name แล้วเลือก Device template เป็นชื่อ template ที่สร้างไว้ก่อนหน้านี้
 * กดปุ่ม Create

### แก้โค้ดโปรแกรม

 * ใน Azure ที่หน้าอุปกรณ์ ให้กดปุ่ม Connect ด้านบนมุมซ้าย
 * คัดลอก ID scope, Device ID, Primary key ไปใส่ในโค้ดโปรแกรมตัวอย่าง [IoT_Central_sample](https://github.com/gravitech-engineer/AIS_IoT_4G/blob/main/examples/Azure_IoT/IoT_Central_sample/IoT_Central_sample.ino)
 * อัพโหลดโปรแกรมลงบอร์ด

### ตรวจสอบผลการทำงาน

 * เปิด Serial Monitor ขึ้นมา ในหน้าต่าง Serial Monitor จะแจ้งสถานะการเชื่อมต่อกับ Azure IoT Central เป็นระยะ ๆ
 * เมื่อเชื่อมต่อสำเร็จ ค่าอุณหภูมิและความชื้นจะส่งขึ้น Azure IoT Central ทุก ๆ 3 วินาที
 * ใน Azure ที่หน้าอุปกรณ์ จะแสดงสถานะอุปกรณ์เป็น Connected ให้กดที่แถบ View เพื่อดูค่าในรูปแบบกราฟ
 * กดดูข้อมูลแบบละเอียดได้ในแถบ Raw data
 * สั่งเปิด-ปิด หลอด LED E15 บนบอร์ดได้โดยกดแถบ Command ตรง Level ให้ใส่ 1 หากต้องการให้ไฟติด และใส่ 0 หากต้องการให้ไฟดับ แล้วกดปุ่ม Run
 * สังเกตว่าใน Serial Monitor จะแสดงผลข้อความแจ้งได้รับ Command ใหม่เข้ามา พร้อมหลอด LED E15 ติด-ดับ ตามคำสั่งที่ส่งเข้ามา

## คำสั่งที่มีให้ใช้งาน
### `#include <GSM.h>`

ใช้สั่งงานโมดูล SIM7600 บนบอร์ดเบื้องต้น มีคำสั่งดังนี้

  * `GSM.begin()` สั่งให้โมดูล SIM7600 เริ่มทำงาน
  * `GSM.shutdown()` สั่งให้โมดูล SIM7600 หยุดทำงาน
  * `GSM.lowPowerMode()` สั่งให้โมดูล SIM7600 เข้าโหมดประหยัดพลังงาน (โหมดเครื่องบิน)
  * `GSM.noLowPowerMode()` สั่งให้โมดูล SIM7600 ออกจากโหมดประหยัดพลังงาน
  * `GSM.getIMEI()` อ่านหมายเลข IMEI ของโมดูล
  * `GSM.getIMSI()` อ่านหมายเลข IMSI

### `#include <GSMNetwok.h>`

คำสั่งเกี่ยวกับการเชื่อมต่อเครือข่าย 4G มีดังนี้

  * `Network.getCurrentCarrier()` อ่านชื่อเครือข่ายที่เชื่อมต่ออยู่
  * `Network.getSignalStrength()` อ่านความแรงของสัญญาณ 4G
  * `Network.getDeviceIP()` อ่านหมายเลข IP ของอุปกรณ์
  * `Network.pingIP()` ใช้ Ping ไปที่ Host ใด ๆ เพื่อทดสอบการเชื่อมต่ออินเตอร์เน็ต

### `#include <GSMClient.h>`

*(สืบทอดคลาส Client)* ใช้เชื่อมต่อ TCP ผ่านเครือข่าย 4G มีคำสั่งดังนี้

  * `GSMClient client` สร้าง Socket ของ TCP และสร้างออปเจค client
  * `client.connect()` สั่งเชื่อมต่อไปที่ TCP Server
  * `client.connected()` ตรวจสอบสถานะการเชื่อมต่อ TCP Server
  * `client.write()` ส่งข้อมูลไปที่ TCP Server
  * `client.available()` ตรวจสอบจำนวนข้อมูลที่ TCP Server ส่งมา
  * `client.read()` อ่านข้อมูลที่ TCP Server ส่งมา
  * `client.stop()` ตัดการเชื่อมต่อกับ TCP Server

### `#include <GSMClientSecure.h>`

*(สืบทอดคลาส Client)* ใช้เชื่อมต่อ TCP ผ่าน TLS ผ่านเครือข่าย 4G มีคำสั่งเหมือนกับ `GSMClient.h` แต่มีคำสั่งเพิ่มขึ้นมาดังนี้

  * `client.setInsecure()` ปิดการตรวจสอบใบรับรอง (CA) ของ TCP/TLS Server
  * `client.setCACert()` ตั้งค่าใบรับรองของ TCP/TLS Server  

### `#include <GPS.h>`

ใช้อ่านค่าพิกัด เวลา ความเร็ว จาก GNSS (GPS) มีคำสั่งดังนี้

 * `GPS.begin()` เริ่มต้นใช้งาน GNSS
 * `GPS.available()` ตรวจสอบสถานะการจับสัญญาณ GNSS (จับสัญญาณได้แล้ว/ยังจับสัญญาณไม่ได้)
 * `GPS.latitude()` อ่านค่าละติจูด
 * `GPS.longitude()` อ่านค่าลองจิจูด
 * `GPS.speed()` อ่านค่าความเร็ว
 * `GPS.course()` 
 * `GPS.altitude()` อ่านค่าความสูง
 * `GPS.getTime()` อ่านค่าเวลา Timestamp หน่วยวินาที (GMT+0)
 * `GPS.standby()` ปิดใช้ GNSS
 * `GPS.wakeup()` เปิดใช้งาน GNSS

### `#include <SHT40.h>`

ใช้อ่านค่าเซ็นเซอร์วัดอุณหภูมิและความชื้นบนบอร์ด AIS 4G Board

 * `SHT40.begin()` เริ่มต้นใช้งานเซ็นเซอร์วัดอุณหภูมิและความชื้น
 * `SHT40.readTemperature()` อ่านค่าอุณหภูมิในหน่วยองศาเซลเซียส
 * `SHT40.readHumidity()` อ่านค่าความชื้นในหน่วย %RH

**remark:** ก่อนเรียกใช้คำสั่ง `SHT40.begin()` ต้องเรียกใช้ `Wire.begin()` ก่อนเสมอ

## ศึกษาเพิ่มเติม

ข้อมูลเพิ่มเติมที่จะช่วยให้เริ่มต้นใช้งาน AIS IoT 4G board ได้ง่ายขึ้น

### เอกสารการใช้งาน

ไลบารี่นี้พัฒนาขึ้นโดยยึดมาตรฐานชื่อคำสั่งที่ Arduino กำหนดไว้ ให้ใช้เอกสารบนเว็บ Arduino ในการอ้างอิงได้เลย

 * [Arduino - GSM](https://www.arduino.cc/en/Reference/GSM)
 * [Arduino - Arduino MKR GPS](https://www.arduino.cc/en/Reference/ArduinoMKRGPS)

### ตัวอย่างโค้ดโปรแกรม

โค้ดโปรแกรมตัวอย่างอยู่ในโฟลเดอร์ `examples` แยกตามหมวดหมู่ ดังนี้

 * `GPS`
   * [Location](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/GPS/Location/Location.ino) - อ่านพิกัดจาก GNSS แสดงผลบน Serial Monitor
   * [UnixTime](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/GPS/UnixTime/UnixTime.ino) - อ่านค่าเวลา่ Unix (Timestamp) แสดงผลบน Serial Monitor
   * [LocalTime](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/GPS/LocalTime/LocalTime.ino) - อ่านค่าเวลาประเทศไทย แสดงผลบน Serial Monitor
 * `GSM`
   * [Read_IMEI](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/GSM/Read_IMEI/Read_IMEI.ino) - อ่านหมายเลข IMEI แสดงผลบน Serial Monitor
   * [Read_IMSI](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/GSM/Read_IMSI/Read_IMSI.ino) - อ่านหมายเลข IMSI แสดงผลบน Serial Monitor
   * [LowPowerMode](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/GSM/LowPowerMode/LowPowerMode.ino) - ตัวอย่างการสั่งให้ SIM7600 เข้าโหมดประหยัดพลังงาน
 * `Network`
   * [Ping](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/Network/Ping/Ping.ino) - Ping เว็บ www.ais.co.th
   * [Read_Device_IP](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/Network/Read_Device_IP/Read_Device_IP.ino) - อ่านหมายเลข IP แสดงผลบน Serial Monitor
   * [Read_Operator_Name](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/Network/Read_Operator_Name/Read_Operator_Name.ino) - อ่านชื่อเครือข่ายที่เชื่อมต่ออยู่
   * [Read_Signal_Strength](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/Network/Read_Signal_Strength/Read_Signal_Strength.ino) - อ่านความแรงสัญญาณ 4G
 * `TCP`
   * [GSMClient](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/TCP/GSMClient/GSMClient.ino) - ตัวอย่างการรับ-ส่งข้อมูลผ่าน TCP
   * [GSMClientSecure](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/TCP/GSMClientSecure/GSMClientSecure.ino) - ตัวอย่างการรับ-ส่งข้อมูลผ่าน TCP/TLS
 * `MQTT` - ตัวอย่างในโฟลเดอร์นี้ดัดแปลงมาจาก [PubSubClient](https://github.com/knolleary/pubsubclient) ศึกษารายละเอียดเพิ่มเติมได้ในลิ้งต้นฉบับ
   * [mqtt_basic](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/MQTT/mqtt_basic/mqtt_basic.ino) - ตัวอย่างการเชื่อมต่อ MQTT อย่างง่าย ส่งข้อมูลเข้า Topic `outTopic` และ Subscribe Topic `inTopic`
   * [mqtt_auth](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/MQTT/mqtt_auth/mqtt_auth.ino) - ตัวอย่างการเชื่อมต่อ MQTT แบบต้องใช้ Username และ Password
   * [mqtt_publish_in_callback](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/MQTT/mqtt_publish_in_callback/mqtt_publish_in_callback.ino) - ตัวอย่างการส่งข้อมูลเข้า Topic `outTopic` ในฟังก์ชั่น Callback
 * `Sensor`
   * [SHT40_Read](https://github.com/maxpromer/AIS_IoT_4G/tree/main/examples/Sensor/SHT40_Read/SHT40_Read.ino) - อ่านอุณหภูมิและความชื้นจากเซ็นเซอร์บนบอร์ด แสดงผลบน Serial Monitor
 * `Azure IoT`
   * [IoT_Hub_sample](https://github.com/gravitech-engineer/AIS_IoT_4G/blob/main/examples/Azure_IoT/IoT_Hub_sample/IoT_Hub_sample.ino) - ตัวอย่างการอ่านค่าอุณหภูมิและความชื้นส่งค่าขึ้น Azure IoT Hub
   * [IoT_Central_sample](https://github.com/gravitech-engineer/AIS_IoT_4G/blob/main/examples/Azure_IoT/IoT_Central_sample/IoT_Central_sample.ino) - ตัวอย่างการอ่านค่าอุณหภูมิและความชื้นส่งค่าขึ้น Azure IoT Central
  
### ไลบารี่แนะนำให้ใช้งานร่วมกัน

 * [HttpClient](https://github.com/amcewen/HttpClient) - ไลบารี่เชื่อมต่อ HTTP(S)

