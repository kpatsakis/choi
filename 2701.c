void fun()
{
  int entity_9 = 38;
  char entity_5[86] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'M', 86-1);
  entity_5[86-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  entity_9 = 90;
  memcpy(entity_8, entity_5, 86*sizeof(char));
}