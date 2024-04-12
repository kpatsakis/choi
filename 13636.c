void fun()
{
  int entity_9 = 54;
  entity_9 = 78;
  char* entity_4;
  char entity_3 = 'c';
  char entity_7[entity_9] = "";
  char entity_5[70] = "";
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'l', 70-1);
  entity_5[70-1]='0';
  memset(entity_7, 'g', entity_9-1);
  entity_7[entity_9-1]='0';
  memcpy(entity_4, entity_7, entity_9*sizeof(char));
}