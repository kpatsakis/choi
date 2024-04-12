void fun()
{
  char* entity_4;
  char entity_0[64] = "";
  entity_0 = NULL;
  char entity_1 = 't';
  char entity_8[36] = "";
  entity_8 = NULL;
  char entity_5[4] = "";
  entity_5 = NULL;
  memset(entity_5, 'k', 4-1);
  entity_5[4-1]='';
  memset(entity_0, 'J', 64-1);
  entity_0[64-1]='';
  memset(entity_8, 'T', 36-1);
  entity_8[36-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  strcpy(entity_4, entity_8);
}