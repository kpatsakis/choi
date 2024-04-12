void fun()
{
  int entity_4 = 81;
  char entity_9[65] = "";
  char* entity_8;
  char* entity_1;
  char entity_6[89] = "";
  memset(entity_9, 'E', 65-1);
  entity_9[65-1]='0';
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'S', 89-1);
  entity_6[89-1]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, 89*sizeof(char));
}