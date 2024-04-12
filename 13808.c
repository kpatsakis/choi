void fun()
{
  int entity_9 = 42;
  entity_9 = 45;
  char entity_6[entity_9] = "";
  char* entity_3;
  char entity_8[76] = "";
  memset(entity_6, 'j', entity_9-1);
  entity_6[entity_9-1]='0';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'h', 76-1);
  entity_8[76-1]='0';
  memcpy(entity_3, entity_6, entity_9*sizeof(char));
}