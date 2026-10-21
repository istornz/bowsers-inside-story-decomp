This repository does not include any of the game's assets, you need your own dump of the game.

Put your dumped ROM (any file name ending in `.nds`) in this directory, then run `./dev.sh python tools/bootstrap.py`.
The version is detected from the ROM header and the file is renamed to `baserom_bis_<version>.nds`.

| Version | Game code | File name             | SHA1                       |
| ------- | --------- | --------------------- | -------------------------- |
| USA     | `CLJE`    | `baserom_bis_usa.nds` | `099b07d55c43601c4866d475032ab9431356cc5d` |
| EUR     | `CLJP`    | `baserom_bis_eur.nds` | `5f35bfbf79a0947740795dd770d99e8eea3ac85e` |
