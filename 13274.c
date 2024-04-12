void fun()
{
  int entity_1 = 83;
  entity_1 = 14;
  char* entity_4;
  char entity_5[entity_1] = "";
  entity_4 = (char*)malloc(64*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'r', entity_1-1);
  entity_5[entity_1-1]='0';
  memcpy(entity_4, entity_5, entity_1*sizeof(char));
}