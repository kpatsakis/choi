void fun()
{
  int entity_5 = 94;
  char* entity_8;
  char entity_3[entity_5] = "";
  char* entity_9;
  memset(entity_3, 'I', entity_5-1);
  entity_3[entity_5-1]='0';
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[0]='0';
  entity_5 = 84;
  memcpy(entity_8, entity_3, entity_5*sizeof(char));
}