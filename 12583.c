void fun()
{
  int entity_5 = 75;
  int entity_7 = 32;
  char entity_9[entity_5] = "";
  char* entity_3;
  char* entity_4;
  entity_3 = (char*)malloc(71*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'N', entity_5-1);
  entity_9[entity_5-1]='0';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_3, entity_9);
}