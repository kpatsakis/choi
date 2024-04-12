void fun()
{
  int entity_2 = 33;
  char entity_0[97] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_0, 'E', 97-1);
  entity_0[97-1]='';
  entity_0[entity_2] = 'N';
}