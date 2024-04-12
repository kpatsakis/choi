void fun()
{
  int entity_9 = 69;
  char* entity_8;
  char entity_5[40] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_5, 'U', 40-1);
  entity_5[40-1]='';
  entity_9 = 93;
  strcpy(entity_8, entity_5);
}