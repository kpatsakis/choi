void fun()
{
  int entity_5 = 90;
  char* entity_8;
  char entity_9[entity_5] = "";
  char entity_7 = 'B';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 's', entity_5-1);
  entity_9[entity_5-1]='0';
  memcpy(entity_8, entity_9, entity_5*sizeof(char));
}