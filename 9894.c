void fun()
{
  int entity_6 = 48;
  entity_6 = 72;
  char entity_8[78] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 78-1);
  entity_8[78-1]='';
  entity_8[entity_6] = 'J';
}