void fun()
{
  int entity_2 = 72;
  entity_2 = 91;
  char* entity_9;
  char entity_8[6] = "";
  entity_8 = NULL;
  char entity_4[97] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', 97-1);
  entity_4[97-1]='';
  memset(entity_8, 'f', 6-1);
  entity_8[6-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  strcpy(entity_9, entity_8);
}