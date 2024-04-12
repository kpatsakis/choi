void fun()
{
  int entity_5 = 36;
  char* entity_4;
  char entity_3[entity_5] = "";
  memset(entity_3, 'p', entity_5-1);
  entity_3[entity_5-1]='0';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, entity_5*sizeof(char));
}