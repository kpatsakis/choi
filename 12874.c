void fun()
{
  int entity_7 = 91;
  char entity_6[97] = "";
  char* entity_1;
  memset(entity_6, 'v', 97-1);
  entity_6[97-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}