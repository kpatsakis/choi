void fun()
{
  int entity_0 = 13;
  char* entity_9;
  char entity_4 = 'X';
  char* entity_8;
  char entity_6 = 'c';
  char entity_1[89] = "";
  memset(entity_1, 'Z', 89-1);
  entity_1[89-1]='0';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_8, entity_1, 89*sizeof(char));
}