void fun()
{
  int entity_4 = 33;
  char entity_6[32] = "";
  entity_6 = NULL;
  char entity_2[92] = "";
  entity_2 = NULL;
  memset(entity_6, 'W', 32-1);
  entity_6[32-1]='';
  memset(entity_2, 'J', 92-1);
  entity_2[92-1]='';
  entity_6[entity_4] = 'l';
}