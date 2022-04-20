String index_html = "<!doctype html><html><head><title>Index - {DEVICE}</title><link rel=\"stylesheet\" type=\"text/css\" href=\"style.css\"/><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"><script type=\"text/javascript\">            window.setInterval(\"getAjax('/uptime', 'uptime')\", 1000);            window.setInterval(\"getAjax('/time', 'time')\", 1000);            window.setInterval(\"getAjax('/cmdstat', 'cmds')\", 2000);            function getAjax(url, resid) {                var http = null;                http = new XMLHttpRequest();                if(http != null) {                   http.open(\"GET\", url, true);                   http.onreadystatechange = print;                   http.send(null);                }                function print() {                    if(http.readyState == 4) {                        document.getElementById(resid).innerHTML = http.responseText;                    }                }            }        </script></head><body><h1>AHOY - {DEVICE}</h1><div id=\"content\" class=\"content\"><p><a href=\"/update\">Update</a><br/><br/><a href=\"/setup\">Setup</a><br/><a href=\"/reboot\">Reboot</a></p><p><span class=\"des\">Uptime: </span><span id=\"uptime\"></span></p><p><span class=\"des\">Time: </span><span id=\"time\"></span></p><p><span class=\"des\">Statistics: </span><pre id=\"cmds\"></pre></p></div><div id=\"footer\"><p class=\"left\">&copy 2022</p><p class=\"right\">AHOY :: {VERSION}</p></div></body></html>";
