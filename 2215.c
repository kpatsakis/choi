void fun()
{
  char entity_4[79] = "";
  entity_4 = NULL;
  char entity_1[17] = "";
  entity_1 = NULL;
  memset(entity_4, 'p', 79-1);
  entity_4[79-1]='';
  memset(entity_1, 'P', 17-1);
  entity_1[17-1]='';
  entity_4[54] = 'o';
}