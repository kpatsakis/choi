void fun()
{
  int entity_4 = 64;
  entity_4 = 96;
  char entity_6[31] = "";
  entity_6 = NULL;
  char entity_0[55] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_6, 'v', 31-1);
  entity_6[31-1]='';
  memset(entity_0, 'N', 55-1);
  entity_0[55-1]='';
  strcpy(entity_5, entity_6);
}