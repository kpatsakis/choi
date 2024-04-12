void fun()
{
  int entity_5 = 94;
  char* entity_3;
  char entity_8[entity_5] = "";
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'L', entity_5-1);
  entity_8[entity_5-1]='0';
  memcpy(entity_3, entity_8, entity_5*sizeof(char));
}