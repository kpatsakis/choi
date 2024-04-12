void fun()
{
  int entity_5 = 47;
  int entity_1 = 75;
  int entity_7 = 67;
  char entity_3 = 'p';
  char entity_8[entity_1] = "";
  char* entity_9;
  memset(entity_8, 'C', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_9 = (char*)malloc(44*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_8, entity_1*sizeof(char));
}