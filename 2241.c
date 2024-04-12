void fun()
{
  char entity_4[32] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_1[44] = "";
  entity_1 = NULL;
  memset(entity_4, 'j', 32-1);
  entity_4[32-1]='';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[63-1]='';
  memset(entity_1, 's', 44-1);
  entity_1[44-1]='';
  strcpy(entity_2, entity_4);
}