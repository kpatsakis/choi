void fun()
{
  int entity_9 = 70;
  entity_9 = 29;
  char* entity_1;
  char entity_5[33] = "";
  entity_5 = NULL;
  memset(entity_5, 'Y', 33-1);
  entity_5[33-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  strcpy(entity_1, entity_5);
}