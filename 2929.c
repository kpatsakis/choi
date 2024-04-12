void fun()
{
  int entity_3 = 91;
  entity_3 = 91;
  char* entity_5;
  char entity_8 = 'Q';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char entity_6[51] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(100*sizeof(char));
  entity_5[100-1]='';
  memset(entity_6, 'M', 51-1);
  entity_6[51-1]='';
  memset(entity_4, 'p', entity_3-1);
  entity_4[entity_3-1]='';
  strcpy(entity_5, entity_4);
}