void fun()
{
  int entity_3 = 56;
  char entity_1[97] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 's', 97-1);
  entity_1[97-1]='0';
  entity_3 = 39;
  strcpy(entity_4, entity_1);
}