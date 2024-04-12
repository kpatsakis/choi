void fun()
{
  int entity_6 = 91;
  char* entity_4;
  char entity_7[97] = "";
  char entity_3 = 't';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'J', 97-1);
  entity_7[97-1]='0';
  entity_6 = 95;
  strcpy(entity_4, entity_7);
}