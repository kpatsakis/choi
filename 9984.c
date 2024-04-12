void fun()
{
  int entity_3 = 95;
  char* entity_0;
  char entity_6[20] = "";
  entity_6 = NULL;
  char entity_8[97] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 97-1);
  entity_8[97-1]='';
  memset(entity_6, 'q', 20-1);
  entity_6[20-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  strcpy(entity_0, entity_8);
}