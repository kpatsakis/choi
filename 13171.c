void fun()
{
  int entity_0 = 66;
  int entity_7 = 74;
  entity_7 = 21;
  char* entity_6;
  char entity_1[entity_7] = "";
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'J', entity_7-1);
  entity_1[entity_7-1]='0';
  memcpy(entity_6, entity_1, entity_7*sizeof(char));
}