void fun()
{
  int entity_2 = 79;
  char* entity_6;
  char entity_8[entity_2] = "";
  char entity_1[94] = "";
  memset(entity_8, 'M', entity_2-1);
  entity_8[entity_2-1]='0';
  memset(entity_1, 'C', 94-1);
  entity_1[94-1]='0';
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_8, entity_2*sizeof(char));
}