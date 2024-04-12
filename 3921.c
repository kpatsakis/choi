void fun()
{
  char entity_9[34] = "";
  entity_9 = NULL;
  char entity_2[12] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_6[10] = "";
  entity_6 = NULL;
  memset(entity_6, 'z', 10-1);
  entity_6[10-1]='';
  memset(entity_2, 'H', 12-1);
  entity_2[12-1]='';
  memset(entity_9, 'Z', 34-1);
  entity_9[34-1]='';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  strcpy(entity_1, entity_9);
}