void fun()
{
  int entity_8 = 82;
  char* entity_3;
  char entity_9 = 'v';
  char entity_0[50] = "";
  entity_0 = NULL;
  char entity_6[97] = "";
  entity_6 = NULL;
  memset(entity_0, 'U', 50-1);
  entity_0[50-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_6, 'B', 97-1);
  entity_6[97-1]='';
  entity_8 = 13;
  strcpy(entity_3, entity_6);
}