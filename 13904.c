void fun()
{
  int entity_7 = 33;
  int entity_0 = 22;
  entity_7 = 83;
  char* entity_6;
  char entity_2[entity_7] = "";
  memset(entity_2, 'H', entity_7-1);
  entity_2[entity_7-1]='0';
  entity_6 = (char*)malloc(39*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, entity_7*sizeof(char));
}