void fun()
{
  int entity_6 = 80;
  int entity_3 = 11;
  char* entity_4;
  char entity_9[59] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_9, 'f', 59-1);
  entity_9[59-1]='';
  memcpy(entity_4, entity_9, 59*sizeof(char));
}