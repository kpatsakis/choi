void fun()
{
  int entity_3 = 26;
  int entity_2 = 11;
  char* entity_8;
  char entity_6[89] = "";
  entity_6 = NULL;
  char entity_0[35] = "";
  entity_0 = NULL;
  memset(entity_6, 'a', 89-1);
  entity_6[89-1]='';
  memset(entity_0, 'l', 35-1);
  entity_0[35-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  strcpy(entity_8, entity_0);
}