void fun()
{
  int entity_4 = 93;
  char entity_2[entity_4] = "";
  char entity_6 = 'i';
  char* entity_9;
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'J', entity_4-1);
  entity_2[entity_4-1]='0';
  memcpy(entity_9, entity_2, entity_4*sizeof(char));
}