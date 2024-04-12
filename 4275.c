void fun()
{
  int entity_4 = 5;
  char entity_9[72] = "";
  entity_9 = NULL;
  char entity_1[36] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_9, 'm', 72-1);
  entity_9[72-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_1, 'P', 36-1);
  entity_1[36-1]='';
  entity_4 = 19;
  strcpy(entity_3, entity_9);
}