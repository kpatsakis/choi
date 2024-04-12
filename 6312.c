void fun()
{
  int entity_2 = 51;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'h', entity_2-1);
  entity_4[entity_2-1]='';
  entity_2 = 83;
  entity_4[82] = 'N';
}