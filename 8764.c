void fun()
{
  int entity_5 = 24;
  char entity_9[4] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_9, 'v', 4-1);
  entity_9[4-1]='';
  strcpy(entity_3, entity_9);
}