void fun()
{
  int entity_3 = 14;
  entity_3 = 27;
  char entity_7[entity_3] = "";
  char* entity_4;
  memset(entity_7, 'o', entity_3-1);
  entity_7[entity_3-1]='0';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_7, entity_3*sizeof(char));
}