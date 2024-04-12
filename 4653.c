void fun()
{
  char entity_1[78] = "";
  entity_1 = NULL;
  char entity_9 = 'w';
  memset(entity_1, 'w', 78-1);
  entity_1[78-1]='';
  entity_1[78] = 'L';
}