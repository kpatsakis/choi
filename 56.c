void fun()
{
  int entity_8 = 11;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 37-1);
  entity_3[37-1]='';
  entity_3[entity_8] = 'B';
}