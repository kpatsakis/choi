void fun()
{
  int entity_1 = 37;
  char* entity_8;
  char entity_6[51] = "";
  char* entity_9;
  char entity_7[entity_1] = "";
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'a', 51-1);
  entity_6[51-1]='0';
  memset(entity_7, 's', entity_1-1);
  entity_7[entity_1-1]='0';
  entity_1 = 84;
  memcpy(entity_9, entity_7, entity_1*sizeof(char));
}