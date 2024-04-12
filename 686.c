void fun()
{
  char entity_1[41] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 41-1);
  entity_1[41-1]='';
  entity_1[23] = 'I';
}