void fun()
{
  int entity_5 = 53;
  char entity_9[20] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_9, 'J', 20-1);
  entity_9[20-1]='';
  entity_5 = 84;
  memcpy(entity_8, entity_9, 20*sizeof(char));
}