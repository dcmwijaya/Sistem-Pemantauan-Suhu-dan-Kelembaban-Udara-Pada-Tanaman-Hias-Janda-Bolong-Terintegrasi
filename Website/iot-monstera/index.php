<!DOCTYPE html>
<html>

<head lang="en">
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0, shrink-to-fit=no">
    <meta name="description" content="Monitoring Suhu Berbasis IOT">
    <meta name="author" content="devan,heri,risal,rifky,haidar">

    <script type="text/javascript" src="assets/js/disable_right.js"></script>

    <!-- BOOTSTRAP 4 -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js" integrity="sha384-ApNbgh9B+Y1QKtv3Rn7W3mgPxhU9K/ScQsAP7hUibX39j7fakFPskvXusvfa0b4Q" crossorigin="anonymous"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js" integrity="sha384-JZR6Spejh4U02d8jOt6vLEHfe/JQGiRRSQQxSfFWpi1MquVdAyjUar5+76PVCmYl" crossorigin="anonymous"></script>

    <!-- Font Awesome JS -->
    <link rel="stylesheet" href="fontawesome/css/all.css">

    <!-- Icon Website -->
    <link rel="icon" href="assets/img/suhu.ico">

    <!-- Custom CSS -->
    <link rel="stylesheet" href="assets/css/stylesheet.css">
    <title>Monitoring Suhu & Kelembapan</title>
</head>

<body>
    <div class="navbar navbar-expand-lg">
        <div class="navbar-text">
            <h5 class="text-white">MONITORING SUHU & KELEMBAPAN UDARA DENGAN SENSOR DHT22</h5>
            <span class="title-sub text-muted">Studi Kasus: Tanaman Hias Janda Bolong</span><br>
        </div>
    </div>

    <div class="wrap-graph" align="center">
        <div class="row">
            <div class="col-sm-6 card-pemisah">
                <div class="card card-wrap">
                    <div class="card-body chart">
                        <iframe style="width:85%;height:240px;" src="https://thingspeak.com/channels/1504372/charts/1?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&title=Grafik+%28Temperatur+Udara%29&type=line"></iframe>
                    </div>
                    <div class="card-body digit">
                        <p class="card-title">Digit (°C)</p>
                        <iframe style="width:47%;" src="https://thingspeak.com/channels/1504372/widgets/356862"></iframe>
                    </div>
                </div>
            </div>
            <div class="col-sm-6 card-pemisah">
                <div class="card card-wrap">
                    <div class="card-body chart">
                        <iframe style="width:85%;height:240px;" src="https://thingspeak.com/channels/1504372/charts/2?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&title=Grafik+%28Kelembapan+Udara%29&type=line"></iframe>
                    </div>
                    <div class="card-body digit">
                        <p class="card-title">Digit (%)</p>
                        <iframe style="width:47%;" src="https://thingspeak.com/channels/1504372/widgets/356863"></iframe>
                    </div>
                </div>
            </div>
        </div>
    </div>

    <footer class="footer page-footer">
        <div class="alert">
            Suhu Optimum Yang Disarankan = <b>23-30°C</b> & Kelembapan Optimum Yang Disarankan = <b><40%</b>
        </div>
    </footer>
</body>

</html>