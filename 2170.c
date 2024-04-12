void fun()
{
  int entity_2 = 1;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 't', 37-1);
  entity_3[37-1]='';
  entity_3[entity_2] = 'x';
}