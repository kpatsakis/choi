void fun()
{
  char entity_3[22] = "";
  entity_3 = NULL;
  char entity_4[19] = "";
  entity_4 = NULL;
  memset(entity_4, 'u', 19-1);
  entity_4[19-1]='';
  memset(entity_3, 'a', 22-1);
  entity_3[22-1]='';
  entity_3[42] = 'H';
}