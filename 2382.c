void fun()
{
  int entity_6 = 65;
  entity_6 = 88;
  char entity_7 = 'l';
  char entity_0[93] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_1[75] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_0, 'c', 93-1);
  entity_0[93-1]='';
  memset(entity_1, 'I', 75-1);
  entity_1[75-1]='';
  strcpy(entity_4, entity_1);
}