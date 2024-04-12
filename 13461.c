void fun()
{
  int entity_2 = 49;
  int entity_3 = 90;
  entity_3 = 17;
  char entity_7[3] = "";
  char entity_8[entity_3] = "";
  char* entity_0;
  memset(entity_7, 'z', 3-1);
  entity_7[3-1]='0';
  memset(entity_8, 'J', entity_3-1);
  entity_8[entity_3-1]='0';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, entity_3*sizeof(char));
}