void fun()
{
  int entity_7 = 99;
  char* entity_9;
  char entity_8[entity_7] = "";
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'C', entity_7-1);
  entity_8[entity_7-1]='0';
  entity_7 = 31;
  memcpy(entity_9, entity_8, entity_7*sizeof(char));
}