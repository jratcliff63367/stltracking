@echo off
setlocal

set ROOT_DIR=%~dp0

pushd "%ROOT_DIR%"

	set BUILD_DIR=compiler

	::echo Using build directory %BUILD_DIR%

	if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"

	pushd "%BUILD_DIR%"
	    if not exist vc14win64 mkdir vc14win64
	    pushd vc14win64
	        cmake -G "Visual Studio 14 2015 Win64" -D DV2_BUILD_PLATFORM:STRING=vc14win64 -D CMAKE_DEBUG_POSTFIX=DEBUG ..\..
	    popd
	popd

popd
