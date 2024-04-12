void fun()
{
  int entity_6 = 32;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_4, 'h', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 68;
  strcpy(entity_0, entity_4);
}