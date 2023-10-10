FROM nginx:latest
LABEL authors="haywardm"

COPY ./docker.sh /docker.sh
COPY ./nginx.conf /etc/nginx/nginx.conf

RUN touch /var/run/nginx.pid && \
    chown -R nginx:nginx /var/run/nginx.pid && \
    chown -R nginx:nginx /var/log/nginx && \
    chown -R nginx:nginx /var/cache/nginx && \
    chmod +x /docker.sh

USER nginx
HEALTHCHECK NONE

ENTRYPOINT ["/docker.sh"]