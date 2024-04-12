void fun()
{
  int entity_3 = 78;
  int entity_5 = 53;
  entity_5 = 53;
  char entity_7[entity_5] = "";
  char* entity_0;
  char* entity_4;
  char entity_2[5] = "";
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'n', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'J', 5-1);
  entity_2[5-1]='0';
  strcpy(entity_4, entity_7);
}