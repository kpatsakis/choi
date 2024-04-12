void fun()
{
  char* entity_6;
  char entity_0[72] = "";
  char entity_8[5] = "";
  char entity_5 = 'j';
  char entity_9[8] = "";
  memset(entity_0, 'r', 72-1);
  entity_0[72-1]='0';
  memset(entity_8, 'V', 5-1);
  entity_8[5-1]='0';
  memset(entity_9, 'U', 8-1);
  entity_9[8-1]='0';
  entity_6 = (char*)malloc(65*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_0);
}