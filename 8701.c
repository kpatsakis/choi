void fun()
{
  int entity_9 = 71;
  entity_9 = 71;
  char* entity_4;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  memset(entity_8, 't', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_4, entity_8);
}