FROM nginx:latest

COPY ./docker.sh /docker.sh
COPY ./main.c /main.c
COPY nginx/nginx.conf /etc/nginx/nginx.conf

RUN apt-get update && \
    apt-get install -y gcc && \
    apt-get install -y libfcgi-dev && \
    apt-get install -y spawn-fcgi && \
    gcc main.c -lpthread -lfcgi -o server && \
    chmod +x /docker.sh

ENTRYPOINT ["/docker.sh"]