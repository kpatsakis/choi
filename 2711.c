void fun()
{
  int entity_8 = 73;
  char* entity_9;
  char entity_4[59] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_4, 'l', 59-1);
  entity_4[59-1]='';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  entity_8 = 21;
  memcpy(entity_7, entity_4, 59*sizeof(char));
}