void fun()
{
  int entity_7 = 36;
  entity_7 = 8;
  char entity_1[entity_7] = "";
  char* entity_3;
  memset(entity_1, 'X', entity_7-1);
  entity_1[entity_7-1]='0';
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, entity_7*sizeof(char));
}