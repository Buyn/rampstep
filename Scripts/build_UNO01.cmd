set BildDir=D:\tools.win\Fast\Evol_fast\vadim\tradomat\RAMPS\Billd
set InoPath=D:\tools.win\Fast\Evol_fast\vadim\tradomat\RAMPS\Source\RAMPS_StepMotor\ramps_stepmotor.ino
set BordName=arduino:avr:uno 
:BAGEN
D:\Development\Ardunio\arduino-1.6.11-windows\arduino-1.6.11\arduino.exe --board %BordName% --pref build.path=%BildDir% --preserve-temp-files -v --verify %InoPath%
pause
goto BAGEN
