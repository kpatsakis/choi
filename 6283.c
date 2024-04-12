void fun()
{
  int entity_5 = 48;
  char entity_6 = 'G';
  char entity_8[32] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_8, 'L', 32-1);
  entity_8[32-1]='';
  memset(entity_2, 'B', entity_5-1);
  entity_2[entity_5-1]='';
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[54-1]='';
  strcpy(entity_0, entity_2);
}