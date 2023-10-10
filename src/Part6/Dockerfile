FROM nginx:latest
LABEL authors="haywardm"

COPY ./docker.sh /docker.sh
COPY ./main.c /main.c
COPY nginx/nginx.conf /etc/nginx/nginx.conf

RUN rm -rf /var/lib/apt/lists && \
    apt-get update && \
    apt-get install -y gcc && \
    apt-get install -y libfcgi-dev && \
    apt-get install -y spawn-fcgi && \
    gcc main.c -lpthread -lfcgi -o server && \
    chmod +x /initialization.sh && \
    chmod 0755 usr/bin/chage && \
    chmod 0755 usr/bin/expiry && \
    chmod 0755 usr/bin/su && \
    chmod 0755 usr/bin/wall && \
    chmod 0755 usr/bin/umount && \
    chmod 0755 usr/bin/chfn && \
    chmod 0755 usr/bin/newgrp && \
    chmod 0755 usr/bin/gpasswd && \
    chmod 0755 usr/bin/chsh && \
    chmod 0755 usr/sbin/unix_chkpwd && \
    chmod 0755 usr/bin/mount && \
    chmod 0755 usr/bin/passwd && \
    chmod 0755 usr/bin/chage && \
    touch /var/run/nginx.pid && \
    chown -R nginx:nginx /var/run/nginx.pid && \
    chown -R nginx:nginx /var/log/nginx && \
    chown -R nginx:nginx /var/cache/nginx

USER nginx

HEALTHCHECK NONE

ENTRYPOINT ["/docker.sh"]