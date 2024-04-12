void fun()
{
  int entity_8 = 36;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_4 = 'T';
  memset(entity_2, 'N', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[89] = 'C';
}