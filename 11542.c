void fun()
{
  int entity_2 = 3;
  char entity_8[97] = "";
  char* entity_9;
  char entity_1[35] = "";
  entity_9 = (char*)malloc(72*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'T', 35-1);
  entity_1[35-1]='0';
  memset(entity_8, 'l', 97-1);
  entity_8[97-1]='0';
  strcpy(entity_9, entity_1);
}