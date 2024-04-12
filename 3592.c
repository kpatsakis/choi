void fun()
{
  int entity_2 = 98;
  char entity_0[81] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memset(entity_0, 'Z', 81-1);
  entity_0[81-1]='';
  entity_2 = 72;
  entity_0[entity_2] = 'W';
}