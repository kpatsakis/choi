void fun()
{
  int entity_6 = 11;
  char entity_7[entity_6] = "";
  char* entity_1;
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'v', entity_6-1);
  entity_7[entity_6-1]='0';
  memcpy(entity_1, entity_7, entity_6*sizeof(char));
}