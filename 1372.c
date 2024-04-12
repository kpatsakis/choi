void fun()
{
  int entity_1 = 18;
  entity_1 = 18;
  char* entity_3;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', entity_1-1);
  entity_9[entity_1-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  strcpy(entity_3, entity_9);
}