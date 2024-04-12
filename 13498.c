void fun()
{
  int entity_4 = 52;
  int entity_1 = 18;
  entity_4 = 52;
  char* entity_5;
  char* entity_3;
  char entity_9[27] = "";
  char entity_7[entity_4] = "";
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 't', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'd', 27-1);
  entity_9[27-1]='0';
  strcpy(entity_3, entity_7);
}