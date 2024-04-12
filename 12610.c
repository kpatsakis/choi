void fun()
{
  int entity_2 = 41;
  char* entity_4;
  char* entity_1;
  char entity_3[entity_2] = "";
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[0]='0';
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'f', entity_2-1);
  entity_3[entity_2-1]='0';
  strcpy(entity_1, entity_3);
}