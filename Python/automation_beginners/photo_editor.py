# Automatic photo editor using pillow library
# https://www.youtube.com/watch?v=vEQ8CXFWLZU
print("Welcome to the Photo Editor App📸")

from PIL import Image, ImageEnhance, ImageFilter
import os

# Unedited images path and Output path for edited images
path_in = './images'
path_out = './edited_images'