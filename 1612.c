void fun()
{
  int entity_7 = 42;
  int entity_3 = 52;
  entity_7 = 42;
  char entity_0[83] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_0, 'g', 83-1);
  entity_0[83-1]='';
  memset(entity_5, 'G', entity_7-1);
  entity_5[entity_7-1]='';
  entity_1 = (char*)malloc(80*sizeof(char));
  entity_1[80-1]='';
  strcpy(entity_1, entity_5);
}