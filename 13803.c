void fun()
{
  int entity_6 = 6;
  int entity_3 = 90;
  int entity_4 = 73;
  char entity_9[entity_4] = "";
  char* entity_7;
  char* entity_5;
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[0]='0';
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'K', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_4 = 34;
  strcpy(entity_7, entity_9);
}