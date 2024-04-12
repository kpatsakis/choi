void fun()
{
  int entity_4 = 86;
  char entity_1[100] = "";
  entity_1 = NULL;
  memset(entity_1, 'V', 100-1);
  entity_1[100-1]='';
  entity_1[entity_4] = 'I';
}