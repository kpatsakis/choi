void fun()
{
  int entity_7 = 77;
  entity_7 = 67;
  char entity_4 = 'a';
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'o', entity_7-1);
  entity_2[entity_7-1]='';
  entity_2[57] = 'I';
}