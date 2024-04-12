void fun()
{
  int entity_4 = 34;
  int entity_6 = 58;
  entity_4 = 80;
  char entity_9 = 'u';
  char entity_8[61] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', 61-1);
  entity_8[61-1]='';
  entity_8[entity_4] = 'x';
}