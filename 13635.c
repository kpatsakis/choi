void fun()
{
  int entity_5 = 28;
  char* entity_7;
  char entity_8[entity_5] = "";
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'v', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_5 = 41;
  strcpy(entity_7, entity_8);
}