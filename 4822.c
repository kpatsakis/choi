void fun()
{
  int entity_2 = 23;
  entity_2 = 80;
  char entity_8[61] = "";
  entity_8 = NULL;
  memset(entity_8, 'Z', 61-1);
  entity_8[61-1]='';
  entity_8[entity_2] = 'z';
}