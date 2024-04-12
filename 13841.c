void fun()
{
  int entity_7 = 35;
  entity_7 = 12;
  char* entity_5;
  char entity_4[entity_7] = "";
  entity_5 = (char*)malloc(95*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'T', entity_7-1);
  entity_4[entity_7-1]='0';
  memcpy(entity_5, entity_4, entity_7*sizeof(char));
}