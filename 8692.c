void fun()
{
  int entity_7 = 86;
  char entity_0[14] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_0, 'Q', 14-1);
  entity_0[14-1]='';
  entity_7 = 2;
  strcpy(entity_8, entity_0);
}