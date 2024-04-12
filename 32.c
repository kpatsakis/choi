void fun()
{
  int entity_5 = 37;
  entity_5 = 84;
  char entity_8[100] = "";
  entity_8 = NULL;
  memset(entity_8, 'D', 100-1);
  entity_8[100-1]='';
  entity_8[entity_5] = 'K';
}