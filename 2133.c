void fun()
{
  int entity_6 = 43;
  char entity_8[21] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_1[12] = "";
  entity_1 = NULL;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_8, 'z', 21-1);
  entity_8[21-1]='';
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[82-1]='';
  memset(entity_3, 'U', entity_6-1);
  entity_3[entity_6-1]='';
  memset(entity_1, 'Q', 12-1);
  entity_1[12-1]='';
  strcpy(entity_0, entity_3);
}