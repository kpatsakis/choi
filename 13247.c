void fun()
{
  int entity_2 = 40;
  int entity_9 = 77;
  char* entity_8;
  char* entity_5;
  char entity_1[entity_2] = "";
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[0]='0';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'U', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_2 = 26;
  memcpy(entity_5, entity_1, entity_2*sizeof(char));
}