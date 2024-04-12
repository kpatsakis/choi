void fun()
{
  int entity_5 = 26;
  char entity_3[entity_5] = "";
  char* entity_1;
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'T', entity_5-1);
  entity_3[entity_5-1]='0';
  memcpy(entity_1, entity_3, entity_5*sizeof(char));
}