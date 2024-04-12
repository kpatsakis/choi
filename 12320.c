void fun()
{
  int entity_7 = 37;
  int entity_0 = 85;
  char entity_5 = 'Y';
  char entity_9[entity_7] = "";
  char* entity_8;
  memset(entity_9, 'N', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}