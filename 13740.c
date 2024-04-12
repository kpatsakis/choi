void fun()
{
  int entity_9 = 27;
  int entity_1 = 9;
  int entity_2 = 90;
  entity_1 = 28;
  char* entity_6;
  char* entity_4;
  char entity_3[entity_1] = "";
  memset(entity_3, 'W', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[0]='0';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_4, entity_3, entity_1*sizeof(char));
}