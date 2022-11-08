# pro micro と qmk_firmware を使う

- どっかに qmk_firmware をcloneしてくる
- docker-compose.yml の volume あたりを qmk_firmware がある path に書き換えたりする
- `docker-compose run json2c` で keymap.c ができる
- `docker-compose run compile` で compile されて hex とかができる

# BLE Micro Proを使う

- `./ble_micro_pro/<keyboard>/` のmaster, slaveそれぞれのconfig.jsonをble micro proにコピーする
  - config.jsonは https://github.com/sekigon-gonnoc/BLE-Micro-Pro のもの
- KEYMAP.JSN を ble micro proにコピーする
