void fun()
{
  int entity_5 = 18;
  char* entity_4;
  char entity_0[entity_5] = "";
  char entity_2 = 'r';
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'w', entity_5-1);
  entity_0[entity_5-1]='0';
  memcpy(entity_4, entity_0, entity_5*sizeof(char));
}