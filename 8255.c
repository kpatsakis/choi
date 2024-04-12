void fun()
{
  int entity_8 = 2;
  entity_8 = 77;
  char entity_0[12] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_0, 'u', 12-1);
  entity_0[12-1]='';
  strcpy(entity_6, entity_0);
}