void fun()
{
  int entity_7 = 9;
  entity_7 = 37;
  char entity_0[30] = "";
  char* entity_4;
  char entity_6[43] = "";
  char entity_9[58] = "";
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'x', 58-1);
  entity_9[58-1]='0';
  memset(entity_6, 'R', 43-1);
  entity_6[43-1]='0';
  memset(entity_0, 'n', 30-1);
  entity_0[30-1]='0';
  strcpy(entity_4, entity_9);
}