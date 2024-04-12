void fun()
{
  int entity_5 = 83;
  char entity_3 = 'A';
  char* entity_1;
  char entity_6[entity_5] = "";
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'h', entity_5-1);
  entity_6[entity_5-1]='0';
  memcpy(entity_1, entity_6, entity_5*sizeof(char));
}