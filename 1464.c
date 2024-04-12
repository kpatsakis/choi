void fun()
{
  char* entity_5;
  char entity_6[97] = "";
  entity_6 = NULL;
  char entity_1[49] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_6, 'c', 97-1);
  entity_6[97-1]='';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[63-1]='';
  memset(entity_1, 'D', 49-1);
  entity_1[49-1]='';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  strcpy(entity_0, entity_1);
}