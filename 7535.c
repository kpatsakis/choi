void fun()
{
  char entity_9[59] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[80-1]='';
  memset(entity_9, 'j', 59-1);
  entity_9[59-1]='';
  memcpy(entity_8, entity_9, 59*sizeof(char));
}