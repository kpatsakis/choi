void fun()
{
  int entity_4 = 42;
  char* entity_5;
  char entity_6[entity_4] = "";
  char entity_2 = 'Q';
  memset(entity_6, 'g', entity_4-1);
  entity_6[entity_4-1]='0';
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[0]='0';
  entity_4 = 15;
  strcpy(entity_5, entity_6);
}