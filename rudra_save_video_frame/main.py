# import the opencv library
import cv2 as cv

from os.path import abspath
SAVE_PATH = abspath('./saved_frames')  # absolute is a str object

# define a video capture object
vid = cv.VideoCapture(0)

while(True):
	# Capture the video frame
	# by frame
	ret, frame = vid.read()

	# Display the resulting frame
	cv.imshow('frame', frame)

	# the 'q' button is set as the
	# quitting button you may use any
	# desired button of your choice
	if cv.waitKey(1) & 0xFF == ord('q'):
		break

	if cv.waitKey(1) & 0xFF == ord('s'):
		print("saving file...")
		cv.imwrite(SAVE_PATH+"/something.png",frame)


# After the loop release the cap object
vid.release()
# Destroy all the windows
cv.destroyAllWindows()
