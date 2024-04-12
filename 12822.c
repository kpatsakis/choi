void fun()
{
  int entity_9 = 84;
  int entity_1 = 97;
  char entity_5 = 'H';
  char* entity_3;
  char entity_4[entity_1] = "";
  entity_3 = (char*)malloc(56*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'x', entity_1-1);
  entity_4[entity_1-1]='0';
  strcpy(entity_3, entity_4);
}