void fun()
{
  int entity_8 = 34;
  char* entity_5;
  char entity_9[14] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_9, 'W', 14-1);
  entity_9[14-1]='';
  entity_8 = 68;
  strcpy(entity_5, entity_9);
}