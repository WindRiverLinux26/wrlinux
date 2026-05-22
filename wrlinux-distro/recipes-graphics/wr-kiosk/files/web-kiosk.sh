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
URL="@STARTING_URL@"
WEBKIT_DISABLE_TBS=1 epiphany -a -i --profile ${HOME}/.config --kiosk-mode "$URL" &
EPIPHANY_PID=$!

# Activate window
sleep 5
WID=$(xdotool search --onlyvisible --class epiphany 2>/dev/null | head -n 1)
if [ -n "$WID" ]; then
	xdotool windowactivate "$WID"
fi

# Virtual keyboard
sleep 2
gsettings set org.gnome.desktop.interface toolkit-accessibility true
gsettings set org.onboard show-status-icon false
gsettings set org.onboard show-tooltips false
gsettings set org.onboard.auto-show enabled true
gsettings set org.onboard.icon-palette in-use false
gsettings set org.onboard.window docking-enabled true
onboard &

# Monitor the browser process
sleep 2
while true; do
	if ! kill -0 $EPIPHANY_PID 2>/dev/null; then
		echo "Epiphany browser crashed, restarting..." >&2
		WEBKIT_DISABLE_TBS=1 epiphany -a -i --profile ${HOME}/.config --kiosk-mode "$URL" &
		EPIPHANY_PID=$!
		sleep 5
		WID=$(xdotool search --onlyvisible --class epiphany 2>/dev/null | head -n 1)
		[ -n "$WID" ] && xdotool windowactivate "$WID"
	fi
	sleep 10
done
