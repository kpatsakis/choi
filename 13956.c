void fun()
{
  int entity_4 = 92;
  char* entity_6;
  char entity_5[entity_4] = "";
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'Z', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_4 = 73;
  memcpy(entity_6, entity_5, entity_4*sizeof(char));
}