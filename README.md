# An Intelligent Sound-Light Induction Desk Lamp cum Security Alarm

## Project Working: 

As the name implies, this project is to make a small lamp controlled by Sound and Light. We need to use the LED module as output. Light sensor and sound sensor are used for input signals. In this way, you can achieve the function of the smart desk lamp: if the surrounding sound level is above a certain pre-set value, then the LED lights up, or if the surrounding light intensity is below a certain value, the LED module also lights up.


## Components Involved

<ul>
  <li>Seeeduino Lotus</li>
  <li>Grove LED</li>
  <li>Light Sensor</li>
  <li>Sound Sensor</li>
  <li>OLED Display</li>
  <li>Grove cable(If broken out)</li>
</ul>

## Purpose & Applications: 

<ol>

  <li>In case of less surrounding light, one would need a lamp. Our smart lamp does this exactly and automatically, thereby reducing human effort.</li>

  <li>In case of surrounding sound greater than a certain value (specified by us), this could be the case in case of a security threat / home invasion when some sound made by the robber will trigger the lamp’s buzzer and light thereby notifying the residents.</li>

  <li>Also in case of a security threat a message “under attack” is displayed on the OLED screen present on the board.</li>
  
 </ol>

## Project Outcome: 

The lamp will light up whenever surrounding light is below a certain set intensity or whenever surrounding sound is above a certain set intensity, then a buzzer gets triggered and a message is displayed.

## Limitations: 

<ol>
<li>The buzzer gets triggered in case the surrounding sound is above a certain pre-specified value. Now this buzzer might sound a false alarm even in case of no threat if something else makes the required sound.</li>

<li>The LED intensity isn’t up to par for real life applications.</li>
</ol>

### References 
https://wiki.seeedstudio.com/Grove-Beginner-Kit-For-Arduino/ <br>
https://www.arduino.cc/education

