void fun()
{
  int entity_1 = 55;
  entity_1 = 55;
  char* entity_6;
  char* entity_2;
  char entity_9[entity_1] = "";
  char* entity_8;
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'a', entity_1-1);
  entity_9[entity_1-1]='0';
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_6, entity_9);
}