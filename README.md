# Intranet

Internal website using CGI with Apache 2


## Structure

* Entry point: `var/www/html/index.html`

* CGI index: `usr/lib/cgi-bin/index.cgi'
	* CGI parts: `cgi/`



## Deployment

The main elements (above) are 'deployed' in that a sym-link is added in their respective root (`/`) locations.

The following is required for that to work:

```
pi@raspberrypi:/usr/lib/cgi-bin$ sudo chown -R www-data:www-data cgi
pi@raspberrypi:/usr/lib/cgi-bin$ sudo chown -R www-data:www-data index.cgi 
pi@raspberrypi:/usr/lib/cgi-bin$ sudo chmod +x index.cgi 
pi@raspberrypi:/usr/lib/cgi-bin$ sudo systemctl restart apache2
```


## Pre-requisites

```
sudo apt update
sudo apt install apache2
sudo a2enmod cgi
sudo service apache2 restart
```

