void fun()
{
  int entity_5 = 19;
  char* entity_8;
  char entity_2[entity_5] = "";
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'N', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_5 = 39;
  memcpy(entity_8, entity_2, entity_5*sizeof(char));
}