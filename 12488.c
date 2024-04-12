void fun()
{
  int entity_7 = 49;
  char entity_8[entity_7] = "";
  char* entity_2;
  char entity_0[83] = "";
  memset(entity_8, 'D', entity_7-1);
  entity_8[entity_7-1]='0';
  memset(entity_0, 'V', 83-1);
  entity_0[83-1]='0';
  entity_2 = (char*)malloc(49*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, entity_7*sizeof(char));
}