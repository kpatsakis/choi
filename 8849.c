void fun()
{
  int entity_3 = 64;
  char* entity_9;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', entity_3-1);
  entity_1[entity_3-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  entity_3 = 14;
  strcpy(entity_9, entity_1);
}