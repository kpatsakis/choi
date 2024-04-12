void fun()
{
  int entity_1 = 1;
  int entity_4 = 85;
  char* entity_5;
  char entity_8 = 'd';
  char* entity_6;
  char entity_7[97] = "";
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'i', 97-1);
  entity_7[97-1]='0';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_5, entity_7);
}