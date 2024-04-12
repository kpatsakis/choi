void fun()
{
  int entity_4 = 22;
  char entity_9[67] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_9, 'k', 67-1);
  entity_9[67-1]='';
  entity_4 = 87;
  strcpy(entity_5, entity_9);
}