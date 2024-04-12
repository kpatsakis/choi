void fun()
{
  char entity_1[69] = "";
  entity_1 = NULL;
  memset(entity_1, 'K', 69-1);
  entity_1[69-1]='';
  entity_1[94] = 'n';
}