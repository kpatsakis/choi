void fun()
{
  int entity_5 = 94;
  char entity_7 = 'V';
  char entity_9[99] = "";
  char entity_2[entity_5] = "";
  char* entity_1;
  char entity_4 = 'B';
  memset(entity_9, 'i', 99-1);
  entity_9[99-1]='0';
  entity_1 = (char*)malloc(31*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'I', entity_5-1);
  entity_2[entity_5-1]='0';
  memcpy(entity_1, entity_2, entity_5*sizeof(char));
}