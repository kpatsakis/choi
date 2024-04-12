void fun()
{
  int entity_1 = 20;
  char entity_3[37] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', 37-1);
  entity_3[37-1]='';
  entity_3[entity_1] = 'R';
}