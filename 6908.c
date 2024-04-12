void fun()
{
  int entity_4 = 54;
  entity_4 = 24;
  char* entity_6;
  char entity_0[57] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_0, 'V', 57-1);
  entity_0[57-1]='';
  strcpy(entity_6, entity_0);
}