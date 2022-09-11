@REM 在 CMakeLists 根目录调用

echo off
if not exist ../build md ../build
cd ../build

if "x86" equ "%1" (
    set Plantform=%1
) else (
    set Plantform=x64
)
if "debug" equ "%2" (
    set BuildType=%2
) else (
    set BuildType=Release 
)

echo "---------------------------------"
echo "* build %Plantform% %BuildType%"
echo "---------------------------------"

cmake ..  -A %Plantform% -DCMAKE_BUILD_TYPE=%BuildType%
cmake --build . --config %BuildType%


