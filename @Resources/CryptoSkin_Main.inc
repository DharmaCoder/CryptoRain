[Rainmeter]
Update=1000
AccurateText=1

[Metadata]
Name= CryptoRain
Author= CleanFlash (http:reddit.com/u/CleanFlash) //
// forked by DharmaCoder (https://github.com/DharmaCoder)
Information= View cryptocurrencies on your desktop
Version= 0.1
License=Creative Commons Attribution - Non - Commercial - Share Alike 3.

// This file is used to define all variables to work with all the files in this package //

[Variables]
colorGreen=0,255,0,255
colorRed=242,68,4,255
colorWhite=255,255,255,255
refreshRate=1000



// You can change the URLs in order to fetch your own currencies //


crypto1Url=https://api.coinmarketcap.com/v1/ticker/electroneum/?convert=USD
crypto2Url=https://api.coinmarketcap.com/v1/ticker/Monero/?convert=USD
crypto3Url=https://api.coinmarketcap.com/v1/ticker/vertcoin/?convert=USD
crypto4Url=https://api.coinmarketcap.com/v1/ticker/bitcoin/?convert=USD

// Define fonts to be used on skins //


[MainFontStyle]
Meter=String
FontFace=Roboto
FontSize=12
FontColor=255,255,255,255
AntiAlias=1

[PortfolioFont]
Meter=String
FontFace=Roboto
FontSize=10
FontColor=255,255,255,255
AntiAlias=1

[ProfitMarginFont]
Meter=String
FontFace=Roboto
FontSize=10
FontColor=0,255,0,255
Antialias=1

// End Variables //
