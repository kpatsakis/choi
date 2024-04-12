void fun()
{
  int entity_8 = 59;
  char entity_3[65] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', 65-1);
  entity_3[65-1]='';
  entity_3[entity_8] = 'L';
}