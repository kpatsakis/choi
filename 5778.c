void fun()
{
  int entity_1 = 97;
  int entity_2 = 88;
  char entity_6[28] = "";
  entity_6 = NULL;
  memset(entity_6, 'w', 28-1);
  entity_6[28-1]='';
  entity_6[entity_2] = 'i';
}