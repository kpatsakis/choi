void fun()
{
  int entity_3 = 82;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'q', entity_3-1);
  entity_0[entity_3-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_3 = 18;
  strcpy(entity_9, entity_0);
}