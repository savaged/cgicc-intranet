# Intranet

Internal website using CGI with Apache 2


## WIP

* Need to do a lot of work to understand CGI configuration with Apache 2
* OR switch to one executable that does everything, with links driven by arguments
    * Going down this route using this reference:
        * https://www.tutorialspoint.com/cplusplus/cpp_web_programming.htm


## Structure

* Entry point: `var/www/html/index.html`

* CGI executable: `index.cgi`



## Deployment

* The entry point (`index.html`) is copied to `var/www/html/`
* The CGI executable is copied to `/usr/lib/cgi-bin/`


## Pre-requisites

```
sudo apt update
sudo apt install apache2
sudo usermod -a -G www-data pi
sudo a2enmod cgi
sudo service apache2 restart
```


## Context

At the start I have two goals.

1. To have fun learning and tinkering with CGI
2. To be able to browse from any device to my useful private(ish) data, at home.
    1. That includes my 'todo' list and I had in mind something like this:
```
#!/bin/bash
echo "<html><head><title>TO DO</title></head><body><table>" ;
print_header=true
while read INPUT ; do
  if $print_header;then
    echo "<tr><th>$INPUT" | sed -e 's/:[^,]*\(,\|$\)/<\/th><th>/g'
    print_header=false
  fi
  echo "<tr><td>${INPUT//,/</td><td>}</td></tr>" ;
done < ~/repos/docs/todo.csv ;
echo "</table></body></html>"
```

