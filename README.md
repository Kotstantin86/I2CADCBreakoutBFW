Welcome To: I2CADCBreakout Example Firmware!!
================================

This is just a basic example sketch showing how to take reading with the breakout board and output via LCD character display using Arduino LiquidCrystal library.

Reading voltages is easy
-------------------------

With just a few commands and the I2C protocol you can add a 12Bit ADC to any project! With a wide range of VCC options meaning you can power it from 2.7 to 5.5V so it will work weather you are on an Arduino platform or Raspi (When powered via 3.3v)

Please see [I2CADCBreakout's Project page](http://www.sparkyswidgets.com/Projects/I2CADCBreakout.aspx) for more information!
<http://www.sparkyswidgets.com/Projects/I2CADCBreakout.aspx>

Whats in the firmware?
-------------------------

This sketch provides a good base to show how to use the ADC breakout, and to provide an out of the box solution.
There really isnt a whole lot to interfacing this board or the MCP3221 in general.


Basic Usage
-------------------------

Using the breakout is very easy and the code should be self explanitory! Hook up the breakout board via I2C, add VIN and common ground with both the Arduino(or what ever you are interfacign with) and what ever you will be reading! VCC takes a wide range from 2.7v to 5.5v although above 4.1v the Vref takes over and provides a stable 4.096v as VIN (NOTE: SDA and SCL will be at VCC levels, this is good and bad; Feed VCC with 3.3v and you can hook right up to a raspi or Arduino, feed with 5v and you can only hook up to Arduino)

####Some Specs
- ~1mV/Step resolution at VIN > Vref
- Wide range of VIN inputs (2.7 to 5.5V)
- Easy to use 12bit ADC

Hardware: Schematics and Layouts
-------------------------

- Take a look in [I2CADCBreakout's Hardware Repo](https://github.com/SparkysWidgets/I2CADCBreakoutHW) for the EAGLE files!
- Check out my I2C pH interface[MinipH](http://www.sparkyswidgets.com/Projects/MinipH.aspx) for a really cost effective PH Probe interface!


License Info
-------------------------

<p>This is a fully open source project released under the CC BY license</p>
<a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/deed.en_US"><img alt="Creative Commons License" style="border-width: 0px;" src="http://i.creativecommons.org/l/by-sa/3.0/88x31.png" /></a><br />
<span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">I2CADCBreakout</span> by <a xmlns:cc="http://creativecommons.org/ns#" href="www.sparkyswidgets.com" property="cc:attributionName" rel="cc:attributionURL">Ryan Edwards, Sparky's Widgets</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/deed.en_US">Creative Commons Attribution-ShareAlike 3.0 Unported License</a>.<br />
Based on a work at <a xmlns:dct="http://purl.org/dc/terms/" href="/projects/I2CADCBreakout.aspx" rel="dct:source">http://www.sparkyswidgets.com/projects/I2CADCBreakout.aspx</a>