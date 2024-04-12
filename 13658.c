void fun()
{
  int entity_2 = 65;
  entity_2 = 93;
  char entity_4[97] = "";
  char* entity_0;
  char* entity_8;
  char* entity_9;
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'O', 97-1);
  entity_4[97-1]='0';
  strcpy(entity_8, entity_4);
}