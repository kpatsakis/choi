void fun()
{
  int entity_2 = 31;
  char entity_9[entity_2] = "";
  char* entity_7;
  char* entity_4;
  memset(entity_9, 'P', entity_2-1);
  entity_9[entity_2-1]='0';
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[0]='0';
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_4, entity_9);
}