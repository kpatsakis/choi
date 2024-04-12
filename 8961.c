void fun()
{
  int entity_5 = 50;
  char entity_2 = 'L';
  char entity_1[100] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 100-1);
  entity_1[100-1]='';
  entity_1[entity_5] = 'n';
}