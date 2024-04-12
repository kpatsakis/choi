void fun()
{
  int entity_1 = 1;
  int entity_5 = 55;
  char* entity_9;
  char entity_7[entity_1] = "";
  char entity_2 = 'h';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'z', entity_1-1);
  entity_7[entity_1-1]='0';
  strcpy(entity_9, entity_7);
}