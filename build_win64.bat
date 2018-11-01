@echo off
setlocal

set ROOT_DIR=%~dp0

pushd "%ROOT_DIR%"

	call generate_projects.bat

	cmake --build compiler\vc14win64 --config Debug
	cmake --build compiler\vc14win64 --config Release

popd
