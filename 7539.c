void fun()
{
  int entity_6 = 98;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 's', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[50] = 'z';
}