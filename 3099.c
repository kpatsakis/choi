void fun()
{
  char entity_9[100] = "";
  entity_9 = NULL;
  memset(entity_9, 'R', 100-1);
  entity_9[100-1]='';
  entity_9[50] = 'L';
}