void fun()
{
  int entity_4 = 4;
  char entity_9[entity_4] = "";
  char* entity_5;
  char entity_1[85] = "";
  char entity_0 = 'x';
  char entity_7 = 'k';
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'y', 85-1);
  entity_1[85-1]='0';
  memset(entity_9, 'v', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_4 = 35;
  strcpy(entity_5, entity_9);
}