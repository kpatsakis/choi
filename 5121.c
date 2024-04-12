void fun()
{
  int entity_3 = 83;
  int entity_2 = 78;
  char entity_5 = 'P';
  char entity_8[2] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'K', 41-1);
  entity_6[41-1]='';
  memset(entity_8, 'N', 2-1);
  entity_8[2-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  strcpy(entity_0, entity_8);
}