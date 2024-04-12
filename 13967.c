void fun()
{
  int entity_0 = 25;
  int entity_5 = 67;
  entity_5 = 50;
  char* entity_1;
  char entity_6[entity_5] = "";
  memset(entity_6, 'm', entity_5-1);
  entity_6[entity_5-1]='0';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, entity_5*sizeof(char));
}