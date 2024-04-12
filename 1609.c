void fun()
{
  int entity_6 = 78;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_1 = 'C';
  memset(entity_3, 'A', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 27;
  entity_3[12] = 'Z';
}