void fun()
{
  int entity_4 = 77;
  entity_4 = 67;
  char* entity_1;
  char entity_6[81] = "";
  entity_6 = NULL;
  char entity_0[89] = "";
  entity_0 = NULL;
  memset(entity_6, 'h', 81-1);
  entity_6[81-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_0, 'K', 89-1);
  entity_0[89-1]='';
  strcpy(entity_1, entity_6);
}