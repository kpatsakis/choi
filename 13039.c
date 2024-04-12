void fun()
{
  int entity_5 = 41;
  char entity_7[entity_5] = "";
  char* entity_4;
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'C', entity_5-1);
  entity_7[entity_5-1]='0';
  entity_5 = 93;
  strcpy(entity_4, entity_7);
}