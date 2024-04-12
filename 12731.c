void fun()
{
  int entity_8 = 17;
  int entity_9 = 1;
  char entity_6[entity_8] = "";
  char* entity_4;
  char* entity_2;
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'U', entity_8-1);
  entity_6[entity_8-1]='0';
  memcpy(entity_4, entity_6, entity_8*sizeof(char));
}