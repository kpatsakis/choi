void fun()
{
  int entity_4 = 24;
  entity_4 = 35;
  char entity_3[62] = "";
  entity_3 = NULL;
  memset(entity_3, 'K', 62-1);
  entity_3[62-1]='';
  entity_3[entity_4] = 'k';
}