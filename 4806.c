void fun()
{
  int entity_1 = 36;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_6 = 'u';
  memset(entity_2, 'F', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[78] = 'A';
}