void fun()
{
  int entity_5 = 66;
  int entity_7 = 94;
  char entity_9[60] = "";
  entity_9 = NULL;
  char entity_3 = 'l';
  char entity_0 = 'p';
  char* entity_1;
  memset(entity_9, 'E', 60-1);
  entity_9[60-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  strcpy(entity_1, entity_9);
}