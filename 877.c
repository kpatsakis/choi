void fun()
{
  int entity_8 = 43;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'z', entity_8-1);
  entity_4[entity_8-1]='';
  entity_4[82] = 'I';
}