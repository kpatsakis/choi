void fun()
{
  int entity_9 = 74;
  char* entity_8;
  char entity_2[6] = "";
  char* entity_6;
  char entity_4[entity_9] = "";
  memset(entity_4, 'D', entity_9-1);
  entity_4[entity_9-1]='0';
  entity_8 = (char*)malloc(40*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'O', 6-1);
  entity_2[6-1]='0';
  entity_9 = 93;
  memcpy(entity_8, entity_4, entity_9*sizeof(char));
}