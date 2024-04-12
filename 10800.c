void fun()
{
  char entity_4[70] = "";
  char entity_1[10] = "";
  memset(entity_1, 's', 10-1);
  entity_1[10-1]='0';
  memset(entity_4, 'x', 70-1);
  entity_4[70-1]='0';
  entity_4[79] = 'V';
}