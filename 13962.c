void fun()
{
  int entity_3 = 98;
  int entity_9 = 95;
  char entity_0 = 'O';
  char entity_7[entity_3] = "";
  char* entity_5;
  memset(entity_7, 'X', entity_3-1);
  entity_7[entity_3-1]='0';
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[0]='0';
  entity_3 = 71;
  strcpy(entity_5, entity_7);
}