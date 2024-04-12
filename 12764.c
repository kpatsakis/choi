void fun()
{
  int entity_5 = 7;
  int entity_2 = 19;
  char* entity_8;
  char* entity_0;
  char entity_1[99] = "";
  char entity_9[1] = "";
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[0]='0';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'e', 99-1);
  entity_1[99-1]='0';
  memset(entity_9, 'v', 1-1);
  entity_9[1-1]='0';
  strcpy(entity_8, entity_1);
}