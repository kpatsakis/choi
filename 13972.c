void fun()
{
  int entity_0 = 95;
  entity_0 = 80;
  char entity_8[entity_0] = "";
  char* entity_1;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'S', entity_0-1);
  entity_8[entity_0-1]='0';
  memcpy(entity_1, entity_8, entity_0*sizeof(char));
}