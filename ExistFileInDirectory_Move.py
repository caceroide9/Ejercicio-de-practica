import shutil
import os

srcPath = 'path1' 
destPath = 'path2' 
OPPath = 'path3'


files = os.listdir(srcPath)
def aux(srcPath,destPath):
    for file in files:
        if not(os.path.isfile(os.path.join(srcPath, file))) and not(os.path.isfile(os.path.join(destPath, file))):
            print("No hacer nada")
            
        else:
            shutil.copy(srcPath + file, destPath + file)


aux(srcPath,destPath)
aux(srcPath,OPPath)


