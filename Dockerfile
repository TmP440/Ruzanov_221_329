FROM ubuntu:18.04

LABEL author="Evgeniy Ruzanov"

ENV TZ=Europe/Moscow
    
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
RUN apt-get update
RUN apt-get install qt5-default -y 
RUN apt-get install qtbase5-dev -y
RUN apt-get install qt5-qmake
RUN apt-get install build-essential -y .

WORKDIR /221_329_Ruzanov

COPY *.cpp /221_329_Ruzanov
COPY *.h /221_329_Ruzanov
COPY *.pro /221_329_Ruzanov

RUN qmake echoServer.pro
RUN make hallServer

ENTRYPOINT ["./hallServer"]