void fun()
{
  int entity_7 = 52;
  char entity_2[50] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 50-1);
  entity_2[50-1]='';
  entity_7 = 5;
  entity_2[entity_7] = 'M';
}