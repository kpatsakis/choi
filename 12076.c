void fun()
{
  int entity_7 = 99;
  char* entity_0;
  char entity_9[97] = "";
  char* entity_1;
  char entity_3[17] = "";
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[0]='0';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'o', 97-1);
  entity_9[97-1]='0';
  memset(entity_3, 'l', 17-1);
  entity_3[17-1]='0';
  strcpy(entity_0, entity_9);
}