void fun()
{
  int entity_4 = 50;
  int entity_3 = 45;
  char* entity_5;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', entity_3-1);
  entity_9[entity_3-1]='';
  entity_5 = (char*)malloc(39*sizeof(char));
  entity_5[39-1]='';
  strcpy(entity_5, entity_9);
}