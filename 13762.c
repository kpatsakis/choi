void fun()
{
  int entity_2 = 48;
  int entity_1 = 97;
  entity_1 = 37;
  char entity_4[entity_1] = "";
  char* entity_9;
  char* entity_8;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'N', entity_1-1);
  entity_4[entity_1-1]='0';
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_4, entity_1*sizeof(char));
}