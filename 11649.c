void fun()
{
  char* entity_0;
  char entity_5[28] = "";
  char entity_1[61] = "";
  memset(entity_5, 'G', 28-1);
  entity_5[28-1]='0';
  memset(entity_1, 'H', 61-1);
  entity_1[61-1]='0';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}