#!/bin/bash

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

pushd "${ROOT_DIR}"

	./generate_projects.sh

	cmake --build compiler/linux64/debug
	cmake --build compiler/linux64/release

popd
