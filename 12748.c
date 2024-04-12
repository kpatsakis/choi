void fun()
{
  int entity_6 = 47;
  char entity_9[9] = "";
  char* entity_7;
  char* entity_4;
  char entity_1 = 'b';
  char entity_2[40] = "";
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[0]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'q', 40-1);
  entity_2[40-1]='0';
  memset(entity_9, 'p', 9-1);
  entity_9[9-1]='0';
  memcpy(entity_7, entity_2, 40*sizeof(char));
}