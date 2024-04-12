void fun()
{
  int entity_4 = 72;
  entity_4 = 72;
  char* entity_3;
  char entity_2[entity_4] = "";
  char entity_6 = 'Q';
  char entity_9 = 'h';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'R', entity_4-1);
  entity_2[entity_4-1]='0';
  strcpy(entity_3, entity_2);
}