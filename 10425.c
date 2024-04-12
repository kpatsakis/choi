void fun()
{
  char entity_1[93] = "";
  char entity_4[89] = "";
  memset(entity_1, 's', 93-1);
  entity_1[93-1]='0';
  memset(entity_4, 'x', 89-1);
  entity_4[89-1]='0';
  entity_4[71] = 'R';
}