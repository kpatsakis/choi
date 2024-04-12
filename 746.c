void fun()
{
  char entity_1[2] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', 2-1);
  entity_1[2-1]='';
  entity_1[35] = 'L';
}