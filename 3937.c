void fun()
{
  int entity_5 = 48;
  char entity_1[60] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  memset(entity_1, 'U', 60-1);
  entity_1[60-1]='';
  strcpy(entity_0, entity_1);
}