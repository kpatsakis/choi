void fun()
{
  int entity_7 = 99;
  int entity_4 = 6;
  char entity_1 = 'C';
  char entity_2[27] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', 27-1);
  entity_2[27-1]='';
  entity_7 = 98;
  entity_2[entity_7] = 'z';
}