#! /bin/sh

# Don't activate screensaver
xset s off > /dev/null 2>&1
# Disable DPMS (Energy Star) features.
xset -dpms > /dev/null 2>&1
# Don't blank the video device
xset s noblank > /dev/null 2>&1

mkdir -p ${HOME}/.config

# Hide idle cursor from screen
unclutter -idle 1 -root &

# Lanuch epiphany browser
sleep 10
WEBKIT_DISABLE_TBS=1 epiphany -a -i --profile ~/.config --kiosk-mode @STARTING_URL@ &
sleep 2

# Refresh
while true; do
	WID=$(xdotool search --onlyvisible --class epiphany 2>/dev/null | head -n 1)
	if [ -n "$WID" ]; then
		xdotool windowactivate "$WID"
		sleep 0.5
		xdotool key shift+F5
		exit 0
	fi
	sleep 2
done
