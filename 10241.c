void fun()
{
  char entity_5[5] = "";
  char entity_4[95] = "";
  memset(entity_5, 'v', 5-1);
  entity_5[5-1]='0';
  memset(entity_4, 'J', 95-1);
  entity_4[95-1]='0';
  entity_4[74] = 'L';
}