import os
import ycm_core
 
flags = [
    '-Wall',
    '-g',
    '-std=c99',
    '/usr/include',
  ]
 
SOURCE_EXTENSIONS = [ '.cpp', '.cxx', '.cc', '.c', ]
 
def FlagsForFile( filename, **kwargs ):
  return {
    'flags': flags,
    'do_cache': True
  }
