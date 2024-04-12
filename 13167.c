void fun()
{
  int entity_1 = 30;
  entity_1 = 86;
  char entity_7[entity_1] = "";
  char* entity_5;
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'P', entity_1-1);
  entity_7[entity_1-1]='0';
  memcpy(entity_5, entity_7, entity_1*sizeof(char));
}