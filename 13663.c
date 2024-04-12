void fun()
{
  int entity_1 = 25;
  int entity_3 = 60;
  entity_3 = 60;
  char entity_7[entity_3] = "";
  char* entity_5;
  char* entity_9;
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[0]='0';
  entity_9 = (char*)malloc(52*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'z', entity_3-1);
  entity_7[entity_3-1]='0';
  strcpy(entity_5, entity_7);
}