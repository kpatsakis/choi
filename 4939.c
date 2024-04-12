void fun()
{
  int entity_4 = 84;
  char entity_2[90] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', entity_4-1);
  entity_9[entity_4-1]='';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_2, 'f', 90-1);
  entity_2[90-1]='';
  memcpy(entity_8, entity_9, entity_4*sizeof(char));
}