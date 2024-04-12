void fun()
{
  int entity_4 = 95;
  entity_4 = 50;
  char* entity_8;
  char entity_9[entity_4] = "";
  char* entity_6;
  memset(entity_9, 'Q', entity_4-1);
  entity_9[entity_4-1]='0';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(23*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_9, entity_4*sizeof(char));
}