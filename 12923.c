void fun()
{
  int entity_3 = 87;
  int entity_5 = 10;
  char* entity_6;
  char entity_2[entity_5] = "";
  entity_6 = (char*)malloc(29*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'Q', entity_5-1);
  entity_2[entity_5-1]='0';
  strcpy(entity_6, entity_2);
}