void fun()
{
  int entity_1 = 84;
  char entity_6[entity_1] = "";
  char* entity_4;
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'H', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_1 = 98;
  memcpy(entity_4, entity_6, entity_1*sizeof(char));
}