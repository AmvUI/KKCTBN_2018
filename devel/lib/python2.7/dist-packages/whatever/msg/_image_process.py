# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from whatever/image_process.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class image_process(genpy.Message):
  _md5sum = "718b8e0ae302cbf8067f998190df9579"
  _type = "whatever/image_process"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int16 setpoint
int16 state_red
int16 state_green
int16 count_red
int16 count_green
"""
  __slots__ = ['setpoint','state_red','state_green','count_red','count_green']
  _slot_types = ['int16','int16','int16','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       setpoint,state_red,state_green,count_red,count_green

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(image_process, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.setpoint is None:
        self.setpoint = 0
      if self.state_red is None:
        self.state_red = 0
      if self.state_green is None:
        self.state_green = 0
      if self.count_red is None:
        self.count_red = 0
      if self.count_green is None:
        self.count_green = 0
    else:
      self.setpoint = 0
      self.state_red = 0
      self.state_green = 0
      self.count_red = 0
      self.count_green = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_5h().pack(_x.setpoint, _x.state_red, _x.state_green, _x.count_red, _x.count_green))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 10
      (_x.setpoint, _x.state_red, _x.state_green, _x.count_red, _x.count_green,) = _get_struct_5h().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_5h().pack(_x.setpoint, _x.state_red, _x.state_green, _x.count_red, _x.count_green))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 10
      (_x.setpoint, _x.state_red, _x.state_green, _x.count_red, _x.count_green,) = _get_struct_5h().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5h = None
def _get_struct_5h():
    global _struct_5h
    if _struct_5h is None:
        _struct_5h = struct.Struct("<5h")
    return _struct_5h
