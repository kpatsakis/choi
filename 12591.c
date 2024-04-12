void fun()
{
  int entity_6 = 85;
  char entity_0[entity_6] = "";
  char* entity_2;
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'K', entity_6-1);
  entity_0[entity_6-1]='0';
  memcpy(entity_2, entity_0, entity_6*sizeof(char));
}