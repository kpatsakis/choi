void fun()
{
  int entity_4 = 61;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[28-1]='';
  memset(entity_6, 'x', entity_4-1);
  entity_6[entity_4-1]='';
  strcpy(entity_0, entity_6);
}