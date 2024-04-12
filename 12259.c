void fun()
{
  int entity_5 = 75;
  char entity_0[entity_5] = "";
  char* entity_6;
  memset(entity_0, 'V', entity_5-1);
  entity_0[entity_5-1]='0';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_0, entity_5*sizeof(char));
}