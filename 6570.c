void fun()
{
  int entity_8 = 86;
  int entity_4 = 51;
  char entity_0[75] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  memset(entity_0, 'a', 75-1);
  entity_0[75-1]='';
  memset(entity_5, 'a', entity_4-1);
  entity_5[entity_4-1]='';
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[56-1]='';
  strcpy(entity_1, entity_5);
}