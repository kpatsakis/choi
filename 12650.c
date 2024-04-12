void fun()
{
  int entity_5 = 73;
  char* entity_7;
  char entity_0[entity_5] = "";
  memset(entity_0, 'e', entity_5-1);
  entity_0[entity_5-1]='0';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, entity_5*sizeof(char));
}