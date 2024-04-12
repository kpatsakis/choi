void fun()
{
  int entity_0 = 95;
  entity_0 = 95;
  char entity_2[97] = "";
  char* entity_4;
  char entity_6[entity_0] = "";
  memset(entity_6, 'G', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'e', 97-1);
  entity_2[97-1]='0';
  strcpy(entity_4, entity_6);
}