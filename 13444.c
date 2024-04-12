void fun()
{
  int entity_1 = 14;
  int entity_5 = 93;
  entity_1 = 14;
  char entity_7[entity_1] = "";
  char* entity_3;
  char entity_6 = 'm';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'C', entity_1-1);
  entity_7[entity_1-1]='0';
  strcpy(entity_3, entity_7);
}