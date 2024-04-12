void fun()
{
  int entity_7 = 60;
  entity_7 = 75;
  char* entity_4;
  char entity_3[entity_7] = "";
  entity_4 = (char*)malloc(23*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'Q', entity_7-1);
  entity_3[entity_7-1]='0';
  memcpy(entity_4, entity_3, entity_7*sizeof(char));
}