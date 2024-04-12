void fun()
{
  int entity_4 = 4;
  char* entity_6;
  char entity_9[69] = "";
  char entity_1[entity_4] = "";
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'A', entity_4-1);
  entity_1[entity_4-1]='0';
  memset(entity_9, 'w', 69-1);
  entity_9[69-1]='0';
  entity_4 = 72;
  memcpy(entity_6, entity_1, entity_4*sizeof(char));
}