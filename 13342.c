void fun()
{
  int entity_4 = 70;
  int entity_9 = 51;
  int entity_3 = 5;
  char* entity_7;
  char entity_1[entity_4] = "";
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'H', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_4 = 44;
  memcpy(entity_7, entity_1, entity_4*sizeof(char));
}