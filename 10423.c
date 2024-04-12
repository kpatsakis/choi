void fun()
{
  char entity_5[95] = "";
  char entity_1[89] = "";
  memset(entity_5, 'Z', 95-1);
  entity_5[95-1]='0';
  memset(entity_1, 'N', 89-1);
  entity_1[89-1]='0';
  entity_1[56] = 'N';
}