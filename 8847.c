void fun()
{
  int entity_9 = 35;
  int entity_6 = 53;
  char entity_0[82] = "";
  entity_0 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_7, 'w', 15-1);
  entity_7[15-1]='';
  memset(entity_0, 'k', 82-1);
  entity_0[82-1]='';
  entity_0[entity_6] = 'x';
}