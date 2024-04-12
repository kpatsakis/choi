void fun()
{
  char entity_1[70] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', 70-1);
  entity_1[70-1]='';
  entity_1[23] = 'n';
}