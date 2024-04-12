void fun()
{
  int entity_2 = 79;
  entity_2 = 79;
  char* entity_1;
  char entity_5[entity_2] = "";
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'B', entity_2-1);
  entity_5[entity_2-1]='0';
  strcpy(entity_1, entity_5);
}