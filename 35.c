void fun()
{
  int entity_9 = 1;
  entity_9 = 1;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'Y', entity_9-1);
  entity_3[entity_9-1]='';
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[81-1]='';
  strcpy(entity_0, entity_3);
}