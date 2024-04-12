void fun()
{
  int entity_1 = 27;
  entity_1 = 80;
  char entity_4[entity_1] = "";
  char* entity_5;
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'M', entity_1-1);
  entity_4[entity_1-1]='0';
  memcpy(entity_5, entity_4, entity_1*sizeof(char));
}