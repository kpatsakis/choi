void fun()
{
  int entity_2 = 75;
  char* entity_1;
  char* entity_4;
  char entity_9[entity_2] = "";
  memset(entity_9, 'T', entity_2-1);
  entity_9[entity_2-1]='0';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[0]='0';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_1, entity_9);
}