void fun()
{
  int entity_3 = 67;
  char entity_8 = 'n';
  char entity_5[entity_3] = "";
  char* entity_9;
  char* entity_7;
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'q', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[0]='0';
  entity_3 = 30;
  strcpy(entity_7, entity_5);
}