struct asset {
  const char *path;
  unsigned int len;
  const char *data;
};

unsigned int assets_len = 6;

struct asset assets[6] = {
{"pixelart/font/alpha.png", 557
, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x68\x00\x00\x00\x20\x08\x04\x00\x00\x00\x54\x1e\xf5\x2b\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x12\x00\x00\x0b\x12\x01\xd2\xdd\x7e\xfc\x00\x00\x00\x1b\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72\x65\x00\x43\x65\x6c\x73\x79\x73\x20\x53\x74\x75\x64\x69\x6f\x20\x54\x6f\x6f\x6c\xc1\xa7\xe1\x7c\x00\x00\x01\xb8\x49\x44\x41\x54\x58\xc3\xed\x58\x4b\xb2\xc3\x30\x08\x83\xfb\x1f\x9a\x6e\x5e\x5e\xa9\x11\x42\xce\xa4\x33\x6d\xa6\xd9\xc4\x8e\x7f\xc8\xc8\xc2\xc4\xc3\xee\xf5\x78\x98\x99\x1d\xa8\xdc\x72\xed\xa8\x4f\xed\x79\x4f\x1c\xd4\xd1\x78\x4f\xef\xb5\x7d\xfd\x92\xfb\xbd\xd6\x2d\x7d\xfd\x2b\x79\xd4\x05\xce\xbe\xb3\x31\xa8\xce\xc6\xad\x63\x56\xb8\x7c\x3d\x01\x10\xda\x51\x66\x20\xf3\x10\x1a\x8f\x38\xc0\x01\x85\x66\xcf\x01\x08\x19\x30\x79\x60\xcf\x43\xd1\xce\x6f\xb0\xdc\x13\x52\x02\xf4\x49\x94\xc3\x80\xfc\x9f\x5a\x88\x72\xc7\x18\x89\x72\x67\x44\xa1\xd2\x67\x47\x14\x02\x7a\xa4\xa7\xf8\x02\xe8\x86\xb2\x7d\x33\x40\x13\x05\x76\x29\xd8\xb7\x4f\x67\x29\x2a\x85\x56\x59\x86\xf5\x34\xff\x53\xe5\xfc\x32\x71\xd0\x0e\xfd\x0e\x20\x45\x8c\xe2\x7d\x80\x78\x54\xe9\xfb\xc7\xa6\x68\x00\x38\x99\x72\x41\x29\xc1\x54\xaa\x52\xce\xe0\xfe\x9d\x07\x34\x85\x86\xa4\x8a\x2a\xa0\x59\x86\x83\xc8\xf2\x04\x68\x2d\xaf\x25\xec\x11\x28\xf2\xaa\x28\x38\x10\x14\x4e\xb9\xde\x80\xd9\xc0\x7a\xe8\xa7\x0d\x7a\x11\x85\x5f\x1c\xfa\x06\x40\xed\x21\x33\xa5\x5d\x53\x21\x5f\x2e\xfc\x31\xae\xf8\x2a\xe7\x28\x61\x80\xe9\x83\xc9\x01\x8c\xd7\xbb\x05\xe7\xf1\x68\x8c\xbe\x9e\x04\xc8\xc0\x8e\x32\x03\xb9\x87\x82\xaa\xa4\x06\x28\x5a\x7b\x4a\xfa\xd0\x19\x30\x79\x60\xcf\x43\x41\xe6\xb7\x42\xc0\xba\x61\x4e\x28\x07\x00\x7d\x16\xe5\x50\x7f\xe6\xa1\x92\x3e\x4c\x94\xdb\x17\x05\x6f\x62\x96\x2a\x0a\xb5\x7f\x90\xcb\xef\x2f\x1f\xfa\xc2\xff\x72\x88\x02\xe7\xe3\x52\x77\xd5\xa9\x69\x42\x27\xcf\x2c\x1f\x42\x6f\xcb\xb7\xed\xf5\xb6\x7b\x95\x48\xa8\x87\x7e\x02\x84\x37\xdc\xb1\xf4\xbc\x07\x10\x8f\x2a\xd3\x78\xf5\x47\x24\xac\x3f\x29\x17\x34\x0e\x19\x55\xa9\x4a\x39\x2e\xe5\xd7\x03\x8a\x9c\x3e\x28\x80\x66\x19\x0e\x2a\xcb\x36\xb4\x4f\xf9\x90\x32\xdf\x96\x28\xe0\x7c\xc8\x25\x03\x59\x74\xd7\xf2\x21\xe7\x20\xaa\x28\xdc\xe8\x79\x00\xed\xf3\xf6\x10\xb3\x4d\xc8\x1c\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"},
{"pixelart/font/hiragana.png", 715
, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x50\x00\x00\x00\x28\x08\x06\x00\x00\x00\x69\x60\x7d\x01\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x12\x00\x00\x0b\x12\x01\xd2\xdd\x7e\xfc\x00\x00\x00\x1b\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72\x65\x00\x43\x65\x6c\x73\x79\x73\x20\x53\x74\x75\x64\x69\x6f\x20\x54\x6f\x6f\x6c\xc1\xa7\xe1\x7c\x00\x00\x02\x56\x49\x44\x41\x54\x68\xde\xed\x5a\x41\x8e\xc4\x30\x08\x83\xff\x3f\x9a\x3d\xed\x68\xb6\x0a\xc1\x36\x64\xd5\x43\x7a\x1a\x29\x49\xc3\x18\x4a\x8c\x89\x47\x84\xdd\x47\x7f\xfc\x01\x60\x98\x99\x27\x73\x7f\xc7\x90\x39\x26\x8c\x33\x63\xab\xb9\xcf\x48\x70\xc1\x7e\xda\xc6\x6f\x00\x63\xb3\xf9\x73\x31\xfb\x07\x56\x61\x9e\x8d\xfb\x66\xbf\x0a\xa4\x1d\x00\x28\xc0\x99\xc3\xbe\xd7\x7d\xc6\xb3\x08\x8c\x02\x00\x2f\x0c\x9d\x8e\xb2\x6e\x04\xc6\xc2\x6e\xe4\x9d\x99\x13\x3e\xeb\xb3\x08\x64\x3d\x84\x46\x80\x2f\x0c\x41\xa3\xdb\x07\x9d\x54\x39\xc0\x0b\xf0\xec\x09\x60\x2c\xbc\x63\xcd\x88\x60\xf3\xe3\xee\x4f\xac\xc0\x37\x11\x84\xca\x86\x2a\xc2\x97\x00\x6e\xbf\x73\x30\x09\xc7\xc6\xf0\x2a\x02\x91\x77\xec\x9c\x8b\xda\x80\xe6\xc8\xea\x00\x4a\x73\xe0\x7d\x9a\x34\xe6\x3e\x87\x01\xec\x70\xc0\x2a\xbf\x78\x41\x69\x2a\x06\x80\x7c\xbe\xc7\x00\x9c\x24\xaa\xc8\x01\x61\xcd\x43\x48\xa1\x50\x36\xf0\xfe\x16\x80\x36\x60\xbc\xba\x16\xb5\x0f\xad\x36\x20\x8e\xc7\x7e\xc2\x3b\x6e\x36\x19\x45\xca\xda\xac\x2a\x61\xaa\x9d\xa3\x11\x38\x55\x09\xf8\xc0\x27\xa9\xbc\x1b\x71\xfe\x54\xae\x97\x0f\x11\x94\x63\xa9\x73\x2a\x9e\x88\xf2\xbf\x7f\x03\xef\xd2\x98\xcb\x03\xdf\x05\x20\xca\xa3\xba\x7a\x9a\x2a\x56\x74\xca\xb4\xae\xdc\x95\xda\x3d\x4d\xa4\xb3\x53\xb0\x12\x27\x10\x9e\xc9\x72\xd4\x4a\x4f\xec\xaa\x49\xa9\x1e\x78\x42\xc9\x60\xb8\x5d\x25\x39\xb1\x74\x27\x3b\x64\x98\x28\x4f\x9d\x9b\xd1\x18\xc5\x78\xb6\x9c\xaa\xb8\x5d\xf5\x3b\x88\x53\x1a\x75\x10\x4d\xd4\x57\x9f\x70\xb7\xe7\xa1\xe4\xd1\x4a\x8f\x44\xc1\x46\xcb\xbd\x4a\x4a\x83\x03\x88\x69\x2a\x99\x68\x98\x92\x22\x10\xae\xb8\x8b\x0e\x25\x0d\xa1\x8a\xf4\x9f\x39\x97\xc6\x5c\x1e\xf8\x2e\x00\x3b\x5c\x10\x6d\x0b\x76\x24\xb1\x71\x31\xa0\xbb\x3f\x1a\x81\x55\x5f\x16\x05\x08\xe1\x71\x9d\x96\x69\x47\x89\x41\xf6\x87\x2a\x11\x44\x6e\x52\xd5\x18\xe6\x14\x57\x9a\x5a\x28\x4d\x51\xf6\x87\x23\x50\xed\xcb\x76\x01\x64\x7a\xc5\x08\xb8\x21\x46\x21\xb5\x5e\xad\x44\x3a\x44\xdb\x41\xef\x33\x75\xef\x34\x80\x2d\x41\x95\xe9\xef\xb2\x5c\xaa\xaa\x8b\x83\x00\x70\xf2\x10\x91\xf7\xbf\x34\xe6\xf2\xc0\xf7\xf1\x40\x55\xcb\xab\x12\x70\xf7\x7a\x1c\x72\xbd\x6d\x4a\xab\x84\x29\x18\x73\x37\x66\x42\x70\xa8\x6a\x5c\xb4\xd1\xa4\xf4\xad\x99\x1c\x2d\x5d\xb0\xec\x24\xe2\x6e\xa5\x81\x02\x78\x32\x02\x19\x16\x42\x13\xe9\x89\x52\x88\xbd\xb7\x37\x1d\x81\xdd\xfb\x8f\xd4\xfd\x40\xd4\xe8\xc9\xfc\xc3\x08\xaa\x2c\x08\x6c\x75\x82\xf4\xc8\x97\xf7\x03\x51\x31\xd2\x0e\x8c\xa3\x44\x1d\xe1\xa9\xaa\x50\x81\xae\xbd\xf7\x03\xa7\x9e\x1f\x4d\x42\x0d\xcf\x08\xd4\x36\xbf\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"},
{"pixelart/maptip/archimedes.png", 215
, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x10\x00\x00\x00\x10\x08\x06\x00\x00\x00\x1f\xf3\xff\x61\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x5c\x46\x00\x00\x5c\x46\x01\x14\x94\x43\x41\x00\x00\x00\x1b\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72\x65\x00\x43\x65\x6c\x73\x79\x73\x20\x53\x74\x75\x64\x69\x6f\x20\x54\x6f\x6f\x6c\xc1\xa7\xe1\x7c\x00\x00\x00\x62\x49\x44\x41\x54\x38\xcb\xc5\x93\x41\x0e\x00\x21\x08\x03\xe5\x65\x7c\x1d\x5e\x56\xaf\x5d\x53\x89\x09\x24\xcb\x4d\x29\xa3\x56\x30\x00\xc8\xcc\xc5\xe1\xee\x4b\x85\xd2\x19\x03\xb8\xb0\x82\xb2\xde\x00\x40\x25\x14\x40\x1d\x64\x11\x81\x97\x82\x5b\x7e\x06\x50\x5d\x51\x99\xc8\xda\x0f\x40\x09\xd5\x9a\xf7\xa4\x89\xa7\xf3\xd5\x8f\xf4\x01\xed\x27\x8c\x98\xf8\x6f\x1f\xb4\x5b\x79\x64\x98\x3a\xe3\xbc\x01\x5a\xd4\xc9\xe9\x37\x05\xe1\x64\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"},
{"pixelart/teiri/hijack.png", 947
, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x80\x00\x00\x00\x80\x04\x03\x00\x00\x00\x31\x10\x7c\xf8\x00\x00\x00\x04\x67\x41\x4d\x41\x00\x00\xb1\x8f\x0b\xfc\x61\x05\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x2d\x50\x4c\x54\x45\x00\x00\x00\x00\x00\x00\x40\x40\x40\xc0\xc0\xc0\xff\xff\xff\x80\x80\x80\x80\x60\x60\x40\x30\x30\xff\xe0\xc0\x00\xff\x00\xff\x81\x81\x20\x18\x18\xc0\xa0\x80\x60\x00\x00\xa0\x40\x40\x1e\xcb\x5e\xb4\x00\x00\x00\x01\x74\x52\x4e\x53\x00\x40\xe6\xd8\x66\x00\x00\x00\x01\x62\x4b\x47\x44\x00\x88\x05\x1d\x48\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe2\x09\x1e\x07\x15\x0f\x88\xcb\xbf\xf4\x00\x00\x02\xd8\x49\x44\x41\x54\x68\xde\xed\x98\xb1\x6f\xd3\x40\x14\xc6\x5f\x8c\xe2\x0e\x5e\xdc\x30\xb4\x62\x72\xdc\x56\xaa\xd4\x05\xea\x84\xec\xf1\x41\x26\x50\xd5\x76\x40\x4c\x16\x0c\x66\x41\xa2\x4a\x64\x47\x72\x41\x6a\xa5\x92\xfc\x0b\x19\x19\xd8\x2d\x96\x2c\xec\x1d\x58\x91\x98\xd2\x09\x89\x01\x35\x7f\x03\x77\x71\x5c\x9f\xdd\xbc\x7b\x95\x2a\xb6\xfb\x96\xe4\xdd\xef\xbe\x37\x78\x79\xdf\x3b\x00\x2d\xad\x1b\xd5\x1a\xae\x73\x1f\x0e\xeb\x2d\xe6\xaa\x0c\x14\xaf\x3d\x64\xac\xeb\xe0\x06\x8a\x43\xad\xc5\x18\x73\x70\x03\xc5\x1f\x78\x1e\xbf\xe1\xa2\x06\x8a\x03\x2f\x9f\xc9\x17\xaa\x06\x8a\x83\xff\x34\x1a\x78\xfb\xad\x03\xcc\x40\x71\x80\xe6\xf9\x78\xb7\x71\xe4\x60\x06\x82\x4f\x26\xd0\xfc\x3a\x7e\xdd\xd8\x71\xf8\xbf\x65\x9d\x19\x8a\x5a\xc5\xc5\xc1\xb7\xcd\xf1\xe8\xc4\x05\xd4\xa0\xe4\xfc\xc0\x8a\xe3\xd3\xcb\x38\x0e\x30\x83\x9a\x8b\x0b\x97\x83\x9f\x2f\x7b\xc3\x08\x33\x4c\x33\x1e\xac\xe6\x5c\xd6\x69\xef\xe3\x9f\xc1\xe7\x28\xff\x48\x4b\x43\x51\x7f\x17\x7c\x14\x60\x1c\xac\x24\xbe\xba\x8a\xa3\xc2\x50\x6d\x38\x15\x3c\x0c\x30\x0e\x90\xa6\x4e\x0d\x82\xa0\xdc\xb0\x30\x58\xd6\x9a\x53\x33\x4d\xc0\xb8\xd0\x7c\x26\x57\x69\x3a\x9f\x49\x86\x3b\x70\x2d\x2d\x2d\xad\x5c\x86\xdb\xb4\xef\xc3\xc1\x65\xfe\xba\xca\x40\x71\x63\x9b\xb1\x27\x36\x6e\xa0\x38\x18\x7c\x5a\xfb\x36\x6e\xa0\x38\x6f\xc8\x4a\x2d\xab\x06\x8a\xd7\xbb\xac\x37\xf0\xb7\x0f\x30\x03\xc5\xa1\xbe\xcf\x7c\xdf\xdb\x3a\xc0\x0c\x14\x07\xe3\x70\x23\x8e\x4f\x76\x1c\xcc\x40\xf0\xc9\xa4\xe6\x8a\x0b\xae\x9d\x0f\xcf\xdc\x90\xd7\x6a\x2e\x86\xf4\x1b\x71\xb0\x07\x98\x41\xcd\xf9\x81\x19\x2f\x94\x62\x06\x35\xe7\x3f\x61\xe5\x82\xb9\xba\x4e\x56\x73\xae\x30\xe4\x2d\xa6\xd3\x34\xff\x48\xcb\x86\x49\x5e\x9b\x51\xc4\xab\x24\xc1\xf8\xed\x06\xa2\x96\x0c\xb7\x1a\x54\x38\x98\xa6\xb9\x61\x59\x16\x94\x0c\x52\x43\x1e\x1d\x02\x23\x4d\x53\x94\x73\xcd\xe6\x72\x15\x04\xef\xff\x4a\x0d\xef\xc0\xb5\xb4\xb4\xb4\x72\xe9\x7c\x20\xc6\xb5\xef\x79\x8f\x51\x03\xc5\xc5\x85\x63\x7e\x84\x1a\x28\x5e\xf7\xb7\xbc\x5e\xf8\xb6\x85\x19\x28\x0e\x46\x7b\xb1\xcf\xa3\x0d\x09\x2e\xe6\xfd\x62\x9f\xbf\x99\xc6\xb9\xa1\xc8\x03\x2a\x2e\x7e\xdc\x8d\xe1\xf8\x6c\x0f\x35\xa8\x79\x36\xae\xc5\x3a\x9f\x62\x06\x35\x17\xf9\x60\x34\xf8\xfd\xa2\x77\x9a\x62\x06\x33\xe3\xc9\x6a\xce\x15\xbe\xeb\x7d\xfa\x35\xb8\x4c\xf3\x8f\xb4\x6c\x58\x8c\xf7\xa1\xe0\x3f\x12\x8c\xf3\x79\x1f\x5f\x5f\xc7\x52\x3e\xc8\x1a\x4a\xf9\x40\x70\x29\x1f\x54\x38\xcf\x07\x60\x1b\xa5\x7c\x50\x6e\xc8\xc7\xb9\x6d\x7c\x90\xf3\x41\x85\xc3\xed\xf9\x3f\x9b\xab\xf3\x41\x95\x6b\x69\x69\x69\xe5\xd2\xf9\x00\x5c\xdf\x6b\x1f\xa9\xde\x0f\x08\x5e\xef\x1e\x33\xbf\x2d\xbf\x0f\x94\x0d\x14\xe7\xeb\xfc\xf3\x28\xea\xcb\xef\x03\x65\x03\xc5\xc1\x38\xdc\xdc\x3d\x3f\x93\xdf\x07\xca\x06\x82\x8b\x75\xfe\xd1\xab\x8b\x2f\xf2\xfb\x40\x66\x28\xd6\x7d\x15\xcf\xd6\xf9\xf1\xb8\xf4\x3e\x50\x36\xa8\xf9\xaa\xf9\x5f\x31\xa8\x79\x9e\x0f\x3a\x44\x3e\xe8\x50\xf9\xa0\x5f\xc9\x07\x9d\x4a\x3e\xe8\x57\xf2\x41\x87\xca\x07\x7d\x22\x1f\xf4\x4b\xf9\x60\x8d\xc8\x07\xa1\x6d\x80\xce\x07\x5a\xff\x51\xff\x00\xa2\xdc\xa8\x6e\x3d\x15\x88\x45\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"},
{"pixelart/teiri/walk.png", 1621
, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x40\x00\x00\x00\x40\x08\x06\x00\x00\x00\xaa\x69\x71\xde\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x12\x00\x00\x0b\x12\x01\xd2\xdd\x7e\xfc\x00\x00\x00\x1b\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72\x65\x00\x43\x65\x6c\x73\x79\x73\x20\x53\x74\x75\x64\x69\x6f\x20\x54\x6f\x6f\x6c\xc1\xa7\xe1\x7c\x00\x00\x05\xe0\x49\x44\x41\x54\x78\xda\xed\x9b\x3d\x76\xa3\x3c\x14\x86\x5f\xed\xe0\x2b\xed\x6a\xc8\x0e\xec\x6e\x3a\x44\x37\x65\xca\xe9\x02\x3b\xf0\x0e\x10\x3b\xf0\x0e\x20\xdd\x94\xd9\x01\xa2\x9b\xce\x2e\xa7\x0b\xa9\x92\x72\x76\x70\xbf\xc2\x48\x11\x42\xfc\x18\x65\xac\xc6\x9c\x93\xc3\x39\x3e\x48\xcf\xbd\x6f\x64\xa1\xfb\x63\x46\x44\xb0\x2f\xc6\x18\x01\x00\xe7\xbc\xf7\x79\x5d\xd7\x0c\x37\xb8\x6e\xc9\x67\xb6\x00\x0a\x2e\xa5\x44\x1c\xc7\xfa\xf3\x24\x49\x16\x1b\xe1\xe3\xc0\xad\xf9\x3d\x01\xc6\xe0\xd7\x18\xe1\xe3\x40\x08\xfe\x40\x80\x31\xb8\x39\xd1\x98\x01\xbe\x0e\x84\xe0\x6b\x01\xe6\x06\x03\x40\x51\x14\x90\x52\x8e\x2f\x27\x0f\x07\x42\xf1\x99\x94\x92\xe6\xbe\x53\x71\x1c\xab\x81\x3d\x63\xf2\x3c\x67\xbe\x0e\x34\x4d\x13\x94\xcf\xc8\xf5\x1a\xb0\xae\xa6\x69\x20\x84\xe8\xfd\x49\x29\x91\xe7\x39\xfb\x02\x07\x82\xf2\x19\x11\x69\xf5\x00\x20\xda\x6c\xf0\xfa\xfb\xd7\x65\xb9\xa4\x02\x75\x25\xc0\x22\x0e\xce\x79\x6f\x57\x95\x52\x2a\x15\xbd\x1c\x30\xff\x7b\x21\xf8\x83\x3d\x80\x84\x40\x13\x01\x31\xe7\x28\x2a\x89\x1c\x00\x13\x62\xf2\x95\xe2\xe9\x40\x50\x7e\xef\x2d\xf0\xb0\xdd\x52\xfb\xf1\x01\x6a\xe5\xe7\xa6\xf1\x78\xb8\x0c\x38\x9f\x2f\x93\x44\x11\xf2\xb2\x1c\xdd\xc4\xd6\x38\x10\x92\xaf\x05\x78\xd8\x6e\x29\xda\x6c\x7a\x0f\x89\xc3\x23\xc4\xf1\x65\xb0\xa4\xf8\x6e\xe7\x34\xc2\xc7\x81\x50\x7c\xa7\x00\xf5\xe9\x84\x8c\x31\x94\x44\x78\x4e\x12\x3c\xd5\x35\x92\xfd\x7e\xd2\x08\x1f\x07\xec\xb1\xf5\xe9\xa4\xb9\xca\x0e\x93\xef\x12\x60\x2d\x7f\x20\x40\xfb\xf1\x81\x68\xb3\xd1\x46\x54\x7f\xff\xa2\x3e\x9d\xb4\x01\x7c\xb7\xbb\xa8\x69\x4c\xe2\x72\xe0\x1a\x01\x5d\xec\x64\xbf\x47\x74\x3e\xa3\xdd\xed\xf4\x9c\x45\x96\x0d\xd8\x6b\x04\x34\xf9\xa3\x02\x44\xe7\x33\xd4\x79\xfa\xa9\x12\x7a\x29\x4d\x09\x60\x3b\x90\xfe\xf7\xdf\x55\x02\xea\xf1\x2f\x47\x3c\xa7\x42\x6f\x56\xed\x6e\x87\xfa\xe5\x88\x42\x54\x93\x02\xac\xe1\x0f\x36\xc1\xd7\xf7\x77\x86\xb7\x86\x58\xc4\x41\x44\x0c\x6f\x0d\x25\xa9\x40\x5d\xd7\xac\xc8\x32\xca\xcb\x52\xdf\x5d\x4b\xb0\xfd\xf8\xc0\xeb\xfb\x3b\x32\xc6\x06\x02\xba\x9c\x77\xb1\xf1\x2d\x66\x49\x92\x90\xde\x28\xdf\x1a\x2a\x44\x85\x31\xb6\x8b\xff\xdc\x1d\x7b\xa5\x94\x28\x5b\x39\xca\x1f\x44\x83\x59\xb7\x9b\x96\x44\x0c\x00\x9e\x93\x84\x00\xe0\x69\x41\x14\xf6\xb0\xdd\xd2\xeb\xef\x5f\xc8\x22\xde\x73\x1e\xdf\xe2\x49\xf1\xcc\xcb\xe6\xd9\xf6\x2c\xe1\x9b\xab\xa7\x6c\xe5\x24\x9f\xb9\x0e\x82\x49\x67\x84\xf9\xce\x04\x70\x59\x11\x37\xb8\x6e\xc9\x1f\x08\xa0\xe0\xe6\xb1\xb1\x69\x1a\xfd\x1e\x5d\x62\x84\x8f\x03\xb7\xe6\xf7\x04\x70\xc1\xaf\x35\xc2\xc7\x81\x10\xfc\x81\x00\x2e\xb8\x3d\xd1\x98\x01\xbe\x0e\x84\xe0\x6b\x01\xa6\x06\x2f\x75\xc2\xc7\x81\x50\x7c\x46\x44\x28\x8a\x82\xf2\x3c\x1f\x84\x8c\xea\xdd\x59\x9f\x4e\xbd\xa8\xaa\xae\xeb\x41\x3c\xee\xe3\x40\x48\xbe\x16\x80\x73\xae\x27\x37\x07\xc4\x71\x8c\xa6\x69\x3e\x8f\x97\x8e\x70\xd6\xd7\x81\x90\x7c\x46\x44\x48\x92\x84\x38\xe7\x90\x52\x42\x4a\x09\xde\x1d\x3f\xed\x4b\x07\x14\xdd\xb3\xea\xa0\xe2\xeb\x40\x48\xbe\x4e\x88\xa8\xa5\xb1\xc4\x00\xf5\x9c\x5a\x46\xbe\x0e\x84\xe4\xeb\x4d\xb0\xc8\x32\x92\x6d\xbb\x68\x82\xf6\xcf\x1f\xbc\xbe\xbf\xf7\x12\x12\x3e\x0e\x84\xe4\x5f\xf6\x80\x2c\x23\xd9\x05\x3f\x4b\xaf\xee\xcc\xfd\x25\x0e\x84\xe4\x33\x91\xa6\x57\xc3\x6d\x03\x7c\x1d\x58\x33\xde\x9c\xc3\x87\xaf\x05\x30\x23\x25\xd7\x64\x2a\xd4\x34\xef\x6b\xe1\x63\x0e\xac\xb1\x21\xfd\xf1\x03\x3e\xfc\x2f\x13\x60\x6e\xfc\x57\xcc\x31\x25\xc0\x5a\xbe\xde\x03\xcc\x50\xb1\xc8\x32\x6a\xab\xea\x92\x88\x38\x9d\x98\x8a\xd5\xed\xbb\xfd\x1d\x9e\x32\xc2\x05\x07\xd0\xfb\x1a\xd8\x36\xe4\x65\xc9\x92\xfd\x9e\xa2\xf3\x19\x72\xb3\xc1\x98\x0d\x3e\x7c\x36\x57\x17\x59\x9a\x0f\x18\x13\x91\x73\x0e\xd1\x6d\x3a\x63\x02\xfa\x70\xa7\xf8\x51\xb7\x29\x4e\x89\x77\xcf\x07\xdc\xf3\x01\xf7\x7c\xc0\x3d\x1f\xd0\x1b\xcc\x39\x47\x9e\xe7\xc1\xf2\x01\xb7\xe6\xf7\xf2\x01\x56\x13\x41\x2f\x8a\x9a\x28\x3d\x33\x5f\x07\x42\xf2\x07\xf9\x00\xf3\x6f\xaa\xd3\xc2\xfc\x1a\xf9\x3a\x10\x92\xdf\xcb\x07\x98\xbb\xa6\x94\x12\xd4\x4a\x5d\x62\x06\x80\x87\xef\x3f\xf5\x01\xc2\x54\xd1\xd7\x81\x90\xfc\xc1\x1e\x60\x1a\x41\x42\xa0\x00\x90\xa7\x1c\x8d\x94\x88\xdb\x4b\xa9\xd9\x5e\xc2\xbe\x0e\x84\xe4\xf7\xde\x02\xae\x90\xb2\x7e\x39\x7e\xaa\x15\xf1\x4b\x03\x82\xe3\x14\xe7\xe3\x40\x48\x7e\x3f\x21\xe2\x08\x22\x5c\x25\x66\x3b\x16\xff\x0a\x07\x42\xf1\x47\x13\x22\x53\x25\x66\x97\x01\xbe\x0e\xd8\xe3\xe7\x4a\xec\xce\x84\xc8\x0a\x7e\x4f\x00\x33\x8a\x32\x4b\xcc\x0a\x6e\x87\xb1\x53\xf0\xb9\x1a\xfd\xd8\x1c\x5d\xe5\x56\x3f\xab\x7a\x04\x94\x3d\x2e\x1b\xc6\xf8\x4b\x04\x1c\x17\xa0\xab\xd1\xab\x73\x74\xbb\xdb\xcd\x0a\x30\x26\xa0\x59\xa3\x5f\x32\x47\x2e\x52\x24\x8f\x07\x44\x46\x0e\x4f\x95\xd8\xa7\x04\x58\xc3\xef\xed\x01\xbd\x38\x3c\x49\xa8\xee\x4a\xdb\x8c\x31\xa2\xae\xcc\x3c\x16\xca\xda\x46\xd8\x02\x96\x44\x78\xd8\x6e\x9d\xce\x3b\x43\x5a\x91\x02\xdf\x3e\x0f\x39\x75\x5d\xeb\xde\x01\x97\x0d\x2e\x7e\x16\x7d\x76\x86\x3d\xd5\xb5\x93\x3f\x9a\x0f\x58\x53\xa7\x1f\xd4\xe0\xdf\x1a\xea\x89\xd0\x4a\x3c\x7c\xff\x89\xb9\x5c\xc0\xda\x3e\x05\x17\xbf\x27\x42\x25\x06\xfc\x7b\x3e\xe0\x9e\x0f\xb8\xe7\x03\xee\xf9\x80\xc1\x60\x3b\x8a\x52\x4b\xc8\xec\xb7\xfd\x97\xfd\x01\xb7\xe4\x0f\xfa\x03\x5c\xf1\xb4\x32\x48\x05\x19\x73\xf5\xf9\x6b\x1d\x08\xc9\x77\xf6\x07\x98\x1d\x99\xe6\x5d\x1c\x8f\xb3\xf5\xf9\x35\x0e\x84\xe4\x3b\xfb\x03\xec\x30\xd2\xd5\x76\x3e\x55\x9f\xbf\xd6\x81\x90\x7c\x67\x7f\x80\x19\x46\x02\x70\xb6\x9d\x4f\xd5\xe7\xaf\x75\x20\x24\x7f\xb4\x3f\xc0\x0c\x23\x81\x4b\xdb\xf9\xd2\xfa\xfc\xb5\x0e\x84\xe4\x4f\xf6\x07\x88\xc3\xe3\xe5\xee\x68\x39\x9f\xab\xcf\x5f\xe3\x40\x48\xbe\xb3\x3f\xc0\x0c\x65\xbb\x73\x39\x52\x29\x21\x0e\x87\xab\xea\xfb\x4b\x1d\xb0\xc7\x8b\xe3\x11\x15\xe7\x28\xbb\xd5\x39\xd6\x72\x3f\x57\xa2\x5f\xc2\x1f\x94\xc7\xed\x50\x52\xb5\xab\x8b\xe3\x11\xe2\x70\x58\xd4\x1f\xb0\x44\xc0\xa9\xfe\x00\xc5\x52\xe1\xb0\xdd\xf2\x3e\xd7\x1f\x70\x8d\x80\x6e\x01\x8c\x50\x56\x6d\x18\x69\x25\x20\x8e\x2f\xb3\xb5\xfd\x39\x01\x6d\x07\x9c\x02\x1c\x1e\x51\xa5\x42\xb3\xed\xdf\x2c\x4c\xf5\x07\x28\x01\x96\x0a\xe8\xec\x0f\x48\xf6\x7b\x52\xf1\x74\x49\xa4\x7b\xf7\x97\xf6\x07\x88\xc3\x23\xda\x4a\x2e\x12\x70\x2c\x94\x55\xcc\x8c\x31\x52\xfd\xfe\xae\x5e\x85\x31\xbe\x2d\x60\x94\x72\x27\xff\xdf\xf4\x07\x88\xb4\xf7\x9b\x01\x3b\x16\xff\xe7\xfd\x01\x22\xed\xfd\x66\xc0\xce\x45\x98\xfc\xff\x01\xd1\x73\x34\x2e\xce\x49\x9e\xc4\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"},
{"pixelart/verity/walk.png", 1326
, "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x40\x00\x00\x00\x40\x08\x06\x00\x00\x00\xaa\x69\x71\xde\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x5c\x46\x00\x00\x5c\x46\x01\x14\x94\x43\x41\x00\x00\x00\x1b\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72\x65\x00\x43\x65\x6c\x73\x79\x73\x20\x53\x74\x75\x64\x69\x6f\x20\x54\x6f\x6f\x6c\xc1\xa7\xe1\x7c\x00\x00\x04\xb9\x49\x44\x41\x54\x78\xda\xed\x9b\xfd\x71\xe3\x2a\x14\xc5\x0f\x15\xec\xeb\xc0\xdb\xc1\xbe\x0e\x0c\x1d\xa4\x04\xa5\x03\x77\x80\xe8\xc0\x1d\xac\x4a\x70\x07\x82\x0e\x36\x1d\xac\x3b\xd8\x54\xc0\xfe\x61\x41\x10\x06\x89\x0f\x09\xcd\x9b\x67\xcd\x64\x62\x27\x86\x1f\xe7\x88\x31\xdc\x7b\x11\xd1\x5a\x23\x74\x29\xa5\xec\x3f\xfa\xbe\xc7\x38\x8e\x04\x00\x18\x63\x7a\x1c\x47\xc2\x18\xd3\x7d\xdf\xe3\x7c\x3e\x13\xec\x70\xb5\xe2\x93\x90\x01\x4a\x29\x2d\xa5\x9c\xfd\xcd\xbc\xef\xfb\xde\xfe\x48\x29\xc1\x39\x27\x5b\x0b\x68\xc9\x7f\x32\x20\x04\x77\x07\x41\x29\x05\xa5\x14\x7d\xdf\x03\x80\xed\x78\x2b\x01\xad\xf9\x33\x03\x96\xe0\xfe\x20\xa4\x94\xc9\xf0\x54\x01\x47\xf0\xad\x01\x7e\x43\xf3\xe1\x9c\x41\xd4\x08\x38\x8a\x1f\x34\xa0\x7b\xa3\x18\x6e\x32\x3a\x88\xd0\x00\x6a\x05\x1c\xc5\x8f\x1a\xd0\x5d\x7a\xfb\x21\xbf\xa3\xbd\x05\xb4\xe4\x07\x0d\xe0\x97\x0e\x00\xc0\x2e\x03\xc6\x6b\x07\xf6\xf6\x78\x6f\x3a\xdb\x5b\x40\x88\xef\xf6\xb1\x25\xff\xc9\x00\x0e\xe0\xfe\x46\x71\xfa\xfe\x1d\xe2\xd7\x09\x5c\x0a\xb0\xa9\xe3\x54\x03\x6a\x04\xc4\xf8\x39\x06\xe4\xf0\x83\xab\x80\xe9\x00\x80\xbd\xfb\xbe\x01\xb1\x6f\xf0\x2d\x05\xb8\xfc\x25\xf3\x6b\xf8\xc1\x8d\x90\x10\x42\x73\xce\xc9\xfd\x43\xe9\xd3\x8f\xaf\x8d\x8a\x10\x42\x87\xc4\xa7\x18\xb8\x26\x60\xd6\x7e\xda\x1b\x18\xbe\xcb\x35\xd7\x56\x7c\x12\xd9\x0a\xeb\x80\x29\xd1\xb5\x37\x26\xc2\x35\xd0\x17\xb1\xd2\x8f\xce\xe5\x96\xf2\x63\x06\xb8\x83\x20\xd3\xeb\xdc\x3d\xf7\x4c\x04\xe7\x1c\x99\x7d\x34\xe1\x47\x0d\x60\xef\x42\x03\x00\xed\x38\xf8\xbf\x77\xe0\xdb\xa9\x78\x00\x25\x22\x84\x7a\xb4\x97\x83\xc0\x78\xed\x76\xe3\x87\x0d\xf8\xbc\x6b\x0b\x74\x5f\x67\x0e\x80\xbd\x0b\x14\x99\xb8\x11\x5f\xa8\xe9\x4b\x6f\xc1\xc4\x27\x03\xcc\x9d\x1f\x7f\x3e\xbe\x88\xcc\x9d\xe0\xe7\x8c\x29\xf8\x79\xd7\xec\x32\x14\x89\xf7\x79\xfe\x78\x52\xf9\xe2\xd7\x09\x29\x33\x88\xe4\xe6\x03\x5a\x5d\xad\xf8\x59\xf9\x80\x9c\x41\xd4\x08\x68\xc9\x0f\xe6\x03\xfc\xb8\xd9\xfc\x24\x2c\x5f\xd5\x02\x5a\xf3\x9f\x76\x82\xfe\x66\x21\xf4\x7e\x69\x10\x35\x02\x8e\xe0\x3f\xc5\x02\x6e\x00\x11\x1a\xc0\x5a\x32\xa2\x54\xc0\x51\xfc\x27\x03\xa4\x94\x36\x5d\x64\x32\x27\x6e\xe3\xb5\x6d\x6c\xa9\x80\xa3\xf8\x33\x03\xcc\x34\x49\xb9\xf6\x10\x70\x04\x7f\x71\x06\x84\x92\x8a\x2d\x05\xb4\xe0\x07\x13\x22\xae\x63\xa1\x14\x53\xea\x14\xce\x15\x70\x04\x3f\x9c\x11\xe2\x9c\x30\xc6\x66\xeb\xe3\x12\x7c\x0b\x01\x7e\x1f\xa1\xf0\x57\x08\xa1\xd7\x0c\xc8\xe5\x87\x13\x22\x4e\x3c\x0e\xc0\xe6\xd7\x52\x43\xe1\x90\x80\x35\xf1\x7e\x3e\xc2\xa4\xb6\x00\xc0\x0f\x69\x63\xed\x4b\xf8\xd1\xc2\xc8\x14\x3e\xda\x78\x3c\xb5\x0c\xe5\xc7\xe3\x46\xc0\xda\xe0\x63\x42\x4c\x18\x9b\xd3\xde\x4d\xe8\xb8\xfc\x50\x15\x69\x29\x21\x42\x00\x68\xa5\x14\xce\xe7\x33\x51\x4a\xe9\x8c\x3a\x9c\x76\x62\x70\x08\x21\x40\x29\x4d\xae\xe3\x19\xd6\xf4\x3b\x3b\x9c\x0e\xdd\xc4\xbc\x7c\xc0\x14\x4d\xc9\x41\x80\x76\x1c\x72\x10\x18\x2e\x14\x6e\x7a\x2c\x21\x16\x2f\x36\xf0\xfe\xa1\x74\x77\x95\x96\x9d\x1b\x51\xe6\x18\x18\xcf\x08\x4d\x21\xed\xf8\x93\x13\xf6\x2e\x74\x4e\x38\x7a\xff\x50\x7a\xf8\x73\xae\x31\x10\x86\xc9\x18\xd3\xe3\x6d\xc8\x4a\x88\x84\x0c\xec\xfe\x51\x41\xfe\x52\x4a\x0c\xa6\x9a\x9a\x1a\x84\xcc\xcc\x73\xb2\xc9\x00\x90\x2b\xa2\x88\x5b\xc0\x27\x52\x4a\x6d\xc2\x45\x53\x3a\x6e\x19\x8f\x9b\x0d\xcc\x51\x7c\xd2\xf7\xbd\x36\x5b\x46\xbf\x74\x9c\x12\x4e\xd6\x0a\x10\x42\x1c\xca\x27\x94\x52\x1b\x3e\xfa\x41\x44\xa8\xa6\xe6\x77\x54\x2b\xc0\x4c\xf5\xa3\xf8\x44\x6b\x0d\xc6\x98\x36\x75\xf3\x94\xf2\xb2\xdb\x51\xad\x00\xd3\xc7\x51\x7c\x42\x29\x5d\x85\xcb\x40\x69\xc9\x1f\x44\x8d\x80\x23\xf9\xab\x06\x18\xb8\x29\x39\xfb\x9d\xd4\x0a\x58\x6b\xbf\x37\x7f\xd1\x00\x77\x4a\x0d\xd7\xbe\x68\x00\x35\x02\x5a\xf0\x83\x06\xd8\xd4\xd1\x6d\xb0\x25\x66\x00\x10\xd7\xa1\x99\x00\x29\x65\x13\xfe\xb2\x01\x94\x42\xd0\xc7\x36\xf4\xfe\xfb\x37\x4e\x37\x09\xd1\x48\x80\x94\xb2\x09\xdf\xae\x02\xee\xd2\x31\xab\xa2\xde\x86\xaf\x25\xe7\x3a\x24\x7f\x01\xa5\x0a\x88\xf5\xe1\xce\x42\x97\xbf\xb5\x81\x76\x2b\xec\x9a\xe0\x86\x8d\x7e\x8d\x3e\x75\x19\x8b\x09\x58\xdb\x0f\xb8\x4b\x5a\xac\xc4\xed\xb7\xaf\xe1\xaf\xe6\x03\xfc\x7d\xc3\xda\xde\xdd\x37\x31\xc5\xc0\x94\x90\x76\x2f\xfe\xda\xf9\x00\x82\x79\x9d\x3e\xbd\x32\xeb\xe4\x03\x0a\xda\x37\xe3\x2f\x86\xc3\x26\x27\x90\x5d\x9d\x7d\x1e\x7c\xbe\x01\x53\x38\x4e\xbb\x87\x88\xac\xea\x74\x06\x7f\x39\x1c\x2e\xad\xd3\x3f\x9b\x57\x32\x03\xaa\xf8\x9e\x79\xf9\x06\x54\xd7\xe9\x7d\x13\x32\x4f\x79\x54\x9f\x53\xf0\x4d\x88\x64\x94\x5e\xe7\x03\x5e\xe7\x03\x32\x9f\x17\x68\x71\x3e\xa0\x25\xbf\xe8\x79\x81\xb5\xfa\x7c\xa9\x80\x23\xf8\xd1\xe7\x05\x62\xa1\x64\x6a\x69\x2b\x57\xc0\x51\xfc\xc5\xe7\x05\x52\x13\x12\x5b\x08\x38\x8a\xbf\x38\x03\x62\xc7\xce\x5b\x09\x68\xc1\x8f\x3e\x2f\xe0\x86\x91\xe6\x75\x28\x1a\xdb\x43\x40\x4b\x7e\xd8\x00\xc0\x86\x91\x00\xec\xb1\x73\x91\x78\x07\x6b\x05\xb4\xe4\x47\xcf\x07\xe0\xf3\x3e\x5b\x1f\x97\x06\xbf\x85\x80\x90\x88\xd9\xf5\xed\x94\x7c\x3e\x20\x87\xbf\xcb\xf9\x80\x90\x81\x46\x40\x8b\xf3\x01\x39\xfc\xff\xca\xf9\x80\xe2\xe7\x15\xd6\xf8\xaf\xf3\x01\xaf\xf3\x01\xaf\xf3\x01\xff\xef\xf3\x01\x7f\x01\xbd\x4e\x22\x94\x8f\x41\x7a\xf8\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"},
};
