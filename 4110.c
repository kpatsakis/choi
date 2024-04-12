void fun()
{
  char entity_3[77] = "";
  entity_3 = NULL;
  memset(entity_3, 'q', 77-1);
  entity_3[77-1]='';
  entity_3[73] = 'L';
}