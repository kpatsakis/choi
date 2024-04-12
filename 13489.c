void fun()
{
  int entity_0 = 45;
  char entity_8[entity_0] = "";
  char* entity_9;
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'p', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_0 = 3;
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}