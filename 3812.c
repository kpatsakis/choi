void fun()
{
  int entity_6 = 98;
  char entity_2[57] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 57-1);
  entity_2[57-1]='';
  entity_6 = 61;
  entity_2[entity_6] = 'e';
}