void fun()
{
  int entity_3 = 35;
  char entity_6[49] = "";
  entity_6 = NULL;
  char entity_4[72] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_4, 'B', 72-1);
  entity_4[72-1]='';
  memset(entity_6, 'M', 49-1);
  entity_6[49-1]='';
  memcpy(entity_9, entity_6, 49*sizeof(char));
}