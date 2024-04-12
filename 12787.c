void fun()
{
  int entity_5 = 99;
  char* entity_3;
  char entity_9[entity_5] = "";
  char* entity_0;
  entity_0 = (char*)malloc(95*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'B', entity_5-1);
  entity_9[entity_5-1]='0';
  memcpy(entity_3, entity_9, entity_5*sizeof(char));
}