[English](README.md) | [Español](README.es.md)

# NyxUSB

Herramienta de extracción de datos mediante USB, diseñada para uso educativo y pruebas de seguridad autorizadas.

## Descripción

NyxUSB es una herramienta basada en hardware que automatiza la extracción de datos desde sistemas objetivo de forma silenciosa y sin conexión a red. Inspirada en Nyx, la diosa de la noche, opera sin llamar la atención y sin dejar rastros evidentes.

## Arquitectura

NyxUSB está compuesto por tres componentes principales:

1. **Digispark (Inyector de comandos)**  
   Actúa como un dispositivo HID que ejecuta comandos predefinidos en el sistema objetivo al conectarse.

2. **USB Payload (Ejecución y almacenamiento)**  
   Contiene un script (por ejemplo, .bat) encargado de realizar el proceso de extracción y almacenar los archivos obtenidos.

3. **Hub USB personalizado (PCB)**  
   Un hub USB construido a medida que permite que ambos dispositivos funcionen simultáneamente y de forma coordinada.

## Funcionamiento

1. El dispositivo se conecta a la máquina objetivo.  
2. El Digispark inyecta comandos automáticamente.  
3. El USB payload ejecuta un script de extracción silenciosa.  
4. Los datos se recopilan y almacenan localmente en el USB.  

## Aviso

Este proyecto está destinado únicamente a fines educativos y pruebas de seguridad autorizadas.  
No utilizar en sistemas sin permiso explícito.
