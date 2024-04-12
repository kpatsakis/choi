void fun()
{
  int entity_2 = 6;
  int entity_5 = 52;
  char entity_3[entity_5] = "";
  char* entity_6;
  char entity_0 = 'p';
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'd', entity_5-1);
  entity_3[entity_5-1]='0';
  entity_5 = 47;
  memcpy(entity_6, entity_3, entity_5*sizeof(char));
}