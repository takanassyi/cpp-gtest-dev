FROM gcc:11.2.0
LABEL maintainer="takanassyi@gmail.com"
LABEL version="0.2"

RUN apt update && apt install -y clang-format git cmake gdb
ARG NUM_CORES=6

# Eigen
WORKDIR /tmp
RUN git clone https://gitlab.com/libeigen/eigen.git -b 3.4
WORKDIR /tmp/eigen/_build
RUN cmake -D CMAKE_INSTALL_PREFIX=/usr/local -D CMAKE_BUILD_TYPE=Release .. && make -j${NUM_CORES} && make install

# google-test
WORKDIR /tmp
RUN git clone https://github.com/google/googletest.git -b release-1.11.0
WORKDIR /tmp/googletest/_build
RUN cmake -D CMAKE_INSTALL_PREFIX=/usr/local -D CMAKE_BUILD_TYPE=Release .. && make -j${NUM_CORES} && make install 

# opencv
WORKDIR /tmp
RUN git clone https://github.com/opencv/opencv.git -b 4.5.5
WORKDIR /tmp/opencv/_build
RUN	cmake \
	# -D OPENCV_GENERATE_PKGCONFIG=ON \
	-D CMAKE_BUILD_TYPE=Release \
	-D CMAKE_INSTALL_PREFIX=/usr/local \
	-D BUILD_PERF_TESTS=OFF \
	-D BUILD_TESTS=OFF \
	-D EIGEN_INCLUDE_PATH=/usr/local/include/eigen3 \
	-D WITH_EIGEN=ON \
	-D WITH_OPENMP=ON .. && make -j${NUM_CORES} && make install

RUN ldconfig

WORKDIR /workspace
