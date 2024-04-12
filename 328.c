void fun()
{
  int entity_5 = 67;
  char* entity_3;
  char entity_9[86] = "";
  entity_9 = NULL;
  char entity_0 = 'z';
  memset(entity_9, 't', 86-1);
  entity_9[86-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  strcpy(entity_3, entity_9);
}