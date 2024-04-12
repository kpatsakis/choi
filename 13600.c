void fun()
{
  int entity_3 = 78;
  int entity_9 = 20;
  char entity_0 = 'k';
  char* entity_4;
  char entity_7 = 'd';
  char entity_5[15] = "";
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'M', 15-1);
  entity_5[15-1]='0';
  entity_9 = 79;
  strcpy(entity_4, entity_5);
}