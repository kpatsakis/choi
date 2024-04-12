void fun()
{
  int entity_3 = 45;
  entity_3 = 17;
  char* entity_5;
  char entity_9 = 'G';
  char entity_4[entity_3] = "";
  memset(entity_4, 'p', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, entity_3*sizeof(char));
}