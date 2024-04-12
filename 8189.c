void fun()
{
  int entity_9 = 53;
  int entity_0 = 43;
  char* entity_5;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'N', entity_0-1);
  entity_4[entity_0-1]='';
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[40-1]='';
  strcpy(entity_5, entity_4);
}