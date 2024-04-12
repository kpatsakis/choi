void fun()
{
  int entity_7 = 98;
  char entity_8[entity_7] = "";
  char* entity_5;
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'V', entity_7-1);
  entity_8[entity_7-1]='0';
  memcpy(entity_5, entity_8, entity_7*sizeof(char));
}