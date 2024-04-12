void fun()
{
  int entity_3 = 58;
  int entity_9 = 41;
  int entity_7 = 90;
  char entity_0[entity_3] = "";
  char* entity_6;
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 'G', entity_3-1);
  entity_0[entity_3-1]='0';
  memcpy(entity_6, entity_0, entity_3*sizeof(char));
}