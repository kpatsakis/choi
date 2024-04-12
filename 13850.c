void fun()
{
  int entity_0 = 85;
  int entity_6 = 39;
  char entity_8[entity_0] = "";
  char* entity_1;
  char* entity_9;
  char entity_2 = 'J';
  memset(entity_8, 'T', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[0]='0';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[0]='0';
  entity_0 = 58;
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}