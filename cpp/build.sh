CPP_SRC_DIR=$(pwd)
BUILD_DIR="${CPP_SRC_DIR}/cmake_build"

echo "CPP source dir: ${CPP_SRC_DIR}"
echo "Build dir: ${BUILD_DIR}"

if [[ ! -d ${BUILD_DIR} ]]; then
    mkdir ${BUILD_DIR}
    echo "Makeing build dir: ${BUILD_DIR}"
fi

cd ${BUILD_DIR} && pwd

CMAKE_CMD="cmake \
${CPP_SRC_DIR}
"

echo ${CMAKE_CMD}
${CMAKE_CMD}

make -j4 && make install
