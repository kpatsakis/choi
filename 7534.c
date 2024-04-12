void fun()
{
  int entity_8 = 55;
  entity_8 = 100;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'W', entity_8-1);
  entity_4[entity_8-1]='';
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[29-1]='';
  memcpy(entity_9, entity_4, entity_8*sizeof(char));
}