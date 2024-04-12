void fun()
{
  char* entity_8;
  char entity_1[28] = "";
  entity_1 = NULL;
  char entity_4[33] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', 33-1);
  entity_4[33-1]='';
  memset(entity_1, 'Q', 28-1);
  entity_1[28-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  strcpy(entity_8, entity_1);
}