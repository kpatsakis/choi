void fun()
{
  char* entity_1;
  char entity_5[22] = "";
  char entity_0[59] = "";
  char entity_3 = 'W';
  memset(entity_5, 'G', 22-1);
  entity_5[22-1]='0';
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'B', 59-1);
  entity_0[59-1]='0';
  strcpy(entity_1, entity_5);
}