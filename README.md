# PassStep
Pascal's Triangle Inspired Fitness Tracker

# Inspiration
As the world struggles to cope with the Covid-19 pandemic, keeping ourselves fit has become more and more important! However, all fitness trackers are fairly similar. You strap them to your wrist and they just tell you how many steps you have taken.

Inspired by these mundane devices, we decided that the humble step counter was in need of an upgrade. Not only did we want a device which counts your steps, we also wanted this device to be appealing (hence the fancy, large LED matrix, okay it isn't huge, but it is bigger then the average fitbit display). Once we had the design down, we knew we needed a special way to display the number of steps taken, so we settled on Pascal's triangle. Not only does this device track your physical workout, it also provides you with a mental workout!

# What it does
The PassStep tracks your steps and displays them using Pascal's triangle. How? Well, it's quite simple! Each LED represents the centre value of a row on Pascal's triangle. For example, one LED represents row zero, who's centre value is one, so if one light is on, it means you took one step. On the other hand, if 6 lights are on, the centre value of the 6th row of Pascal's triangle is 20, so if 6 lights are on, you have taken 20 steps.

But how do you calculate how many steps you have taken? It is quite simple, all you need to do is count the number of lights currently on when you push the button, this is your "n" value, then divide that value by 2, and round to the nearest whole number, this is your "r" value. You can then compute "n choose r", and you will find the number of steps you have taken! Approximately. As you get higher, the accuracy decreases. If you don't have your graphing calculator on you, then the mental workout comes in as you must compute n choose r in your head, which may prove challenging.

# How we built it
The build is quite simple, the three main components are the microcontroller, the LED matrix, and the mercury switch. Normally step tracking is accomplished with an accelerometer, however we did not have one, so we ended up trying a couple different solutions. The first thing we tried was a vibration sensor, which proved too tough to trigger when you take a step (unless you are a really heavy walker). The solution which worked was a mercury switch left in its on state. When you take a step, the little ball in the switch skips and disconnects the circuit. This is detected by the microcontroller, and a step is counted. This proved to be a simple, yet effective step counter, I hope to experiment with it more in the future! It did introduce one bug, which was when you turn the step counter over, the switch disconnects and starts registering steps, even if you aren't stepping, but this can be easily fixed with a little more tweaking in the code. It just wasn't worth the time, and we figured it was more fun to leave it in for the first prototype.

The rest of the build is fairly self explanatory, we used a simple LED matrix, and hooked it up to the arduino and used multiplexing to light up multiple rows at once. Currently it still requires the computer to be attached to provide power (I couldn't find a suitable power supply) but the next iteration will certainly stand on its own!

Overall this is a fairly simple combination of parts, but together they make something which otherwise would be much more complex, and require much more advanced tech. So it is cool to see how easy it is to simplify complex things when you are willing to sacrifice a little performance!

# Challenges we ran into
The biggest challenge was a late start, originally we had a plan for an android app for a completely different idea, but found ourselves in a little deep over our heads, so we ended up dialling it back and sticking to hardware, something we know a little more about and are a little more comfortable with (we know, we are backwards).

Other then that we had a few issues with compatibility between the LED matrix and the breadboard we were using, hence the awkward mounting, as the matrix was found at a surplus store, so was not meant for hobby use. Additionally, the breadboard prototype got a little complex, and ended up a little more flakey then we had hopped, especially after I dropped it. Hopefully once we find the time to make it a little more permanent, it will be more reliable!

# Accomplishments that we're proud of
I think we are probably most proud of that video, it was fun! And overall just being able to complete the project in a reasonable amount of time (most projects take us FOREVER).

# What we learned
I think the most important thing we learned is to not try something completely new during a timed event. It is important to learn new things at hackathons, but it probably isn't a great idea to download a completely new development environment and try to code your project in a language you've never used before.

Next time we'll just have to recruit someone with a little experience in the project we choose to pursue! Ultimately though, it was for the best, we are very happy with out project!

# What's next for PassStep - A Pascal's Triangle Step Tracker
The next step would probably be to solder it more permanently, and maybe a 3D printed case. We also want to transfer over to an attiny from the arduino nano, to make it a bit more compact, and more efficient. At that point if we are still interested, I guess the next step would be to get some PCBs made, and maybe try putting together a kit? If you would be interested in building your own PassStep from a kit, definitely let us know! It could be fun to put one together.

# Learn more by checking out the original devpost post!

https://devpost.com/software/passstep-a-pascal-s-triangle-step-tracker
