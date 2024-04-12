void fun()
{
  int entity_7 = 40;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[59] = 'b';
}