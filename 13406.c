void fun()
{
  int entity_5 = 24;
  char entity_7[entity_5] = "";
  char* entity_1;
  char entity_9 = 'O';
  memset(entity_7, 'J', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[0]='0';
  entity_5 = 80;
  strcpy(entity_1, entity_7);
}