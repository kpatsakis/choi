void fun()
{
  char* entity_1;
  char entity_0[39] = "";
  entity_0 = NULL;
  char entity_5[68] = "";
  entity_5 = NULL;
  char entity_4[42] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  memset(entity_0, 'T', 39-1);
  entity_0[39-1]='';
  memset(entity_4, 'X', 42-1);
  entity_4[42-1]='';
  memset(entity_5, 'G', 68-1);
  entity_5[68-1]='';
  strcpy(entity_1, entity_0);
}