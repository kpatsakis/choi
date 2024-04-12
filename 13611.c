void fun()
{
  int entity_1 = 93;
  entity_1 = 3;
  char* entity_2;
  char entity_4[entity_1] = "";
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'w', entity_1-1);
  entity_4[entity_1-1]='0';
  memcpy(entity_2, entity_4, entity_1*sizeof(char));
}