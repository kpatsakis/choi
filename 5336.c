void fun()
{
  int entity_1 = 7;
  char entity_0 = 'X';
  char entity_4[88] = "";
  entity_4 = NULL;
  char entity_5[93] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_4, 'P', 88-1);
  entity_4[88-1]='';
  memset(entity_5, 'X', 93-1);
  entity_5[93-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_5);
}