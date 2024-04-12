void fun()
{
  int entity_9 = 2;
  int entity_0 = 13;
  char entity_8[entity_0] = "";
  char* entity_7;
  char* entity_6;
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'Z', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_6, entity_8, entity_0*sizeof(char));
}