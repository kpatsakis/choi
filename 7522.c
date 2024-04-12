void fun()
{
  int entity_8 = 97;
  int entity_5 = 64;
  entity_8 = 97;
  char* entity_3;
  char entity_0[3] = "";
  entity_0 = NULL;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_1 = 'U';
  memset(entity_6, 'q', entity_8-1);
  entity_6[entity_8-1]='';
  memset(entity_0, 'x', 3-1);
  entity_0[3-1]='';
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[83-1]='';
  strcpy(entity_3, entity_6);
}