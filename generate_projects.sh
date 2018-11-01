#!/bin/bash

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

pushd "${ROOT_DIR}"

	BUILD_DIR="compiler"

	echo "Using build directory ${BUILD_DIR}"

	if [ ! -d "${BUILD_DIR}" ]; then mkdir -p "${BUILD_DIR}"; fi

	pushd "${BUILD_DIR}"
	    if [ ! -d linux64/debug ]; then mkdir -p linux64/debug; fi
	    pushd linux64/debug
	        cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DDV2_BUILD_PLATFORM:STRING=linux64 ../../..
	    popd

	    if [ ! -d linux64/release ]; then mkdir -p linux64/release; fi
	    pushd linux64/release
	        cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DDV2_BUILD_PLATFORM:STRING=linux64 ../../..
	    popd
	popd

popd
