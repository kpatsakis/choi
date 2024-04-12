void fun()
{
  int entity_2 = 94;
  char entity_0[81] = "";
  entity_0 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_0, 'p', 81-1);
  entity_0[81-1]='';
  strcpy(entity_4, entity_0);
}