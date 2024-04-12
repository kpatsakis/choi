void fun()
{
  int entity_4 = 91;
  char entity_1 = 'L';
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'W', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[100] = 'x';
}