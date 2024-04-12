void fun()
{
  int entity_8 = 33;
  char entity_4[27] = "";
  entity_4 = NULL;
  memset(entity_4, 'b', 27-1);
  entity_4[27-1]='';
  entity_4[entity_8] = 'D';
}