void fun()
{
  int entity_4 = 28;
  int entity_2 = 24;
  entity_4 = 42;
  char entity_5 = 'A';
  char* entity_9;
  char entity_7[entity_4] = "";
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'F', entity_4-1);
  entity_7[entity_4-1]='0';
  memcpy(entity_9, entity_7, entity_4*sizeof(char));
}