void fun()
{
  int entity_4 = 17;
  char entity_3[6] = "";
  entity_3 = NULL;
  memset(entity_3, 'r', 6-1);
  entity_3[6-1]='';
  entity_3[entity_4] = 'n';
}