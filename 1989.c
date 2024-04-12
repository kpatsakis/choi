void fun()
{
  int entity_9 = 87;
  entity_9 = 87;
  char* entity_7;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'j', entity_9-1);
  entity_0[entity_9-1]='';
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  strcpy(entity_7, entity_0);
}