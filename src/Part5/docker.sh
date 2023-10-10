#!/bin/bash

service nginx start
service nginx status
nginx -s reload
spawn-fcgi -p 8080 -n ./server