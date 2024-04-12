void fun()
{
  int entity_1 = 30;
  char entity_0 = 'n';
  char entity_2[61] = "";
  entity_2 = NULL;
  memset(entity_2, 'u', 61-1);
  entity_2[61-1]='';
  entity_2[entity_1] = 'w';
}