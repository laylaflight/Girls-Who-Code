from PIL import Image

# RGB values for recoloring.
darkBlue = (0, 51, 76)
red = (217, 26, 33)
lightBlue = (112, 150, 158)
yellow = (252, 227, 166)

# Import image.
my_image = Image.open("20134777_1899526076988082_1361491761_n.jpg") #change IMAGENAME to the path on your computer to the image you're using
image_list = my_image.getdata() #each pixel is represented in the form (red value, green value, blue value, transparency). You don't need the fourth value.
image_list = list(image_list) #Turns the sequence above into a list. The list can be iterated through in a loop.

recolored = [] #list that will hold the pixel data for the new image.

#YOUR CODE to loop through the original list of pixels and build a new list based on intensity should go here.
intensityofDarkBlue = sum(darkBlue)             #the sum of the intensity of each color#
intensityOfRed = sum(red)
intensityOflightBlue = sum(lightBlue)
intensityOfyellow = sum(yellow)

for pixel in image_list:                        #for loop within image_list  #image_list is the within the pixels in the image
    if sum (pixel)<= 182:                        # this checks the intensity of the color Dark blue
        image_list = (0, 51,76)                  # this sets the image_list equaled to the color Dark blue
        recolored.append(image_list)             # and if it runs fill in pixel with dark blue
    elif sum (pixel)<= 364:                                       # this checks the intensity of the color red
        image_list = (217,26,33)                                  # this sets the image_list equaled to the color red
        recolored.append(image_list)                              # and if it runs fill in pixel with red
    elif sum (pixel)<= 546:                     # this checks the intensity of the color light blue
        image_list = (112, 150, 158)            # this sets the image_list equaled to the color light blue
        recolored.append(image_list)            # and if it runs fill in pixel with light blue
    else:                                                  # if none of the statements are true this runs or if the pixels are greater than 546
        image_list = (252, 227, 166)                       # this sets the image_list equaled to the color yellow
        recolored.append(image_list)                        # and if it runs fill in pixel with yellow

# Create a new image using the recolored list. Display and save the image.
new_image = Image.new("RGB", my_image.size) #Creates a new image that will be the same size as the original image.
new_image.putdata(recolored) #Adds the data from the recolored list to the image.
new_image.show() #show the new image on the screen
new_image.save("recolored.jpg", "jpeg") #save the new image as "recolored.jpg"
new_image.append()
