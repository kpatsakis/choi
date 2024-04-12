void fun()
{
  int entity_4 = 41;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_7 = 'v';
  char entity_6[77] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', 77-1);
  entity_6[77-1]='';
  memset(entity_8, 'e', entity_4-1);
  entity_8[entity_4-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  strcpy(entity_0, entity_8);
}