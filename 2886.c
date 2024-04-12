void fun()
{
  int entity_7 = 85;
  entity_7 = 28;
  char entity_3[22] = "";
  entity_3 = NULL;
  memset(entity_3, 'G', 22-1);
  entity_3[22-1]='';
  entity_3[entity_7] = 'h';
}