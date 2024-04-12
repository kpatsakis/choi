void fun()
{
  int entity_4 = 78;
  int entity_8 = 64;
  entity_8 = 36;
  char entity_7[90] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', 90-1);
  entity_7[90-1]='';
  entity_7[entity_8] = 'G';
}