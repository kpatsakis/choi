void fun()
{
  int entity_6 = 25;
  entity_6 = 90;
  char entity_3[57] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 57-1);
  entity_3[57-1]='';
  entity_3[entity_6] = 'o';
}