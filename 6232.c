void fun()
{
  char entity_4[19] = "";
  entity_4 = NULL;
  char entity_2 = 'z';
  char entity_1[91] = "";
  entity_1 = NULL;
  memset(entity_1, 'o', 91-1);
  entity_1[91-1]='';
  memset(entity_4, 'w', 19-1);
  entity_4[19-1]='';
  entity_1[42] = 'E';
}