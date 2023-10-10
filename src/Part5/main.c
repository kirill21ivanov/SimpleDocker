#include <fcgi_stdio.h>
#include <fcgi_config.h>
#include <fcgiapp.h>


int main() {
  while (FCGI_Accept() >= 0) {
    printf("Content-Type: text/html\n\n");
    printf("hello world\n");
  }
}
