void fun()
{
  int entity_9 = 43;
  int entity_5 = 100;
  char* entity_8;
  char* entity_3;
  char entity_1[entity_5] = "";
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'x', entity_5-1);
  entity_1[entity_5-1]='0';
  memcpy(entity_8, entity_1, entity_5*sizeof(char));
}