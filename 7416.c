void fun()
{
  int entity_5 = 64;
  char* entity_0;
  char entity_8[14] = "";
  entity_8 = NULL;
  char entity_4[10] = "";
  entity_4 = NULL;
  memset(entity_8, 'Q', 14-1);
  entity_8[14-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_4, 'M', 10-1);
  entity_4[10-1]='';
  strcpy(entity_0, entity_4);
}