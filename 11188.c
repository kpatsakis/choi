void fun()
{
  char entity_3 = 'W';
  char entity_8[49] = "";
  char* entity_2;
  char entity_7[15] = "";
  char* entity_9;
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'x', 49-1);
  entity_8[49-1]='0';
  memset(entity_7, 'O', 15-1);
  entity_7[15-1]='0';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_2, entity_7, 15*sizeof(char));
}