void fun()
{
  int entity_1 = 67;
  int entity_3 = 5;
  char* entity_9;
  char entity_5[59] = "";
  char entity_6[entity_1] = "";
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'D', 59-1);
  entity_5[59-1]='0';
  memset(entity_6, 'i', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_1 = 94;
  memcpy(entity_9, entity_6, entity_1*sizeof(char));
}