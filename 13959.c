void fun()
{
  int entity_0 = 10;
  entity_0 = 18;
  char* entity_1;
  char entity_6[entity_0] = "";
  memset(entity_6, 'i', entity_0-1);
  entity_6[entity_0-1]='0';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, entity_0*sizeof(char));
}