void fun()
{
  char* entity_6;
  char* entity_8;
  char entity_7[18] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_7, 'E', 18-1);
  entity_7[18-1]='';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memcpy(entity_6, entity_7, 18*sizeof(char));
}