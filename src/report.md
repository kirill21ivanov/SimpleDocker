## Part 1. Готовый докер  
##### Взял официальный докер образ с **nginx** и выкачал его при помощи `docker pull nginx`  
![report](report/Part1/1.png)  
##### Проверил наличие докер образа через `docker images`  
![report](report/Part1/2.png)
##### Запустил докер образ через `docker run -d [image_id|repository]`  
![report](report/Part1/3.png)  
##### Проверить, что образ запустился через `docker ps`  
![report](report/Part1/4.png)  
##### Посмотреть информацию о контейнере через `docker inspect [container_id|container_name]`  
![report](report/Part1/5.png)  
##### По выводу команды определить и поместить в отчёт размер контейнера, список замапленных портов и ip контейнера  
![report](report/Part1/6.png)  
![report](report/Part1/7.png)  
##### Остановить докер образ через `docker stop [container_id|container_name]`  
![report](report/Part1/8.png)  
##### Проверить, что образ остановился через `docker ps`  
![report](report/Part1/9.png)    
##### Запустить докер с портами 80 и 443 в контейнере, замапленными на такие же порты на локальной машине, через команду *run*
![report](report/Part1/11.png)    
 
##### Проверить, что в браузере по адресу *localhost:80* доступна стартовая страница **nginx** 
![report](report/Part1/10.png)

##### Перезапустить докер контейнер через `docker restart [container_id|container_name]`  
![report](report/Part1/12.png)  
##### Проверить любым способом, что контейнер запустился  
![report](report/Part1/13.png)    

## Part 2. Операции с контейнером  

##### Прочитал конфигурационный файл *nginx.conf* внутри докер контейнера через команду *exec*  
![report](report/Part2/1.png)
##### Создал на локальной машине файл *nginx.conf*  
##### Настроил в нем по пути */status* отдачу страницы статуса сервера **nginx**  
![report](report/Part2/2.png) 
##### Скопировал созданный файл *nginx.conf* внутрь докер образа через команду `docker cp`  
 ![report](report/Part2/3.png)
##### Перезапустил **nginx** внутри докер образа через команду *exec*  
![report](report/Part2/4.png)
##### Проверил, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**  
![report](report/Part2/5.png)  
![report](report/Part2/6.png)
##### Экспортировал контейнер в файл *container.tar* через команду *export*  
![report](report/Part2/7.png)
##### Остановил контейнер  
![report](report/Part2/8.png)
##### Удалил образ через `docker rmi [image_id|repository]`, не удаляя перед этим контейнеры  
![report](report/Part2/9.png)
##### Удалил остановленный контейнер  
![report](report/Part2/10.png) 
![report](report/Part2/11.png)
##### Импортировал контейнер обратно через команду *import*  
![report](report/Part2/12.png) 
##### Запустил импортированный контейнер  
![report](report/Part2/13.png)
![report](report/Part2/14.png)

##### Проверил, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**  
![report](report/Part2/15.png)
![report](report/Part2/16.png)