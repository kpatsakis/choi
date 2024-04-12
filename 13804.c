void fun()
{
  int entity_1 = 44;
  int entity_4 = 3;
  int entity_7 = 41;
  int entity_0 = 29;
  char entity_2[entity_7] = "";
  char* entity_5;
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'u', entity_7-1);
  entity_2[entity_7-1]='0';
  entity_7 = 76;
  memcpy(entity_5, entity_2, entity_7*sizeof(char));
}