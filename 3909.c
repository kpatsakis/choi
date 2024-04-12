void fun()
{
  int entity_6 = 66;
  char entity_8[17] = "";
  entity_8 = NULL;
  memset(entity_8, 't', 17-1);
  entity_8[17-1]='';
  entity_6 = 58;
  entity_8[entity_6] = 'M';
}