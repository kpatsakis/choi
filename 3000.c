void fun()
{
  char entity_5 = 'v';
  char entity_8[22] = "";
  entity_8 = NULL;
  char entity_4[51] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 51-1);
  entity_4[51-1]='';
  memset(entity_8, 'Y', 22-1);
  entity_8[22-1]='';
  entity_4[59] = 'W';
}