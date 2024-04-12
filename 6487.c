void fun()
{
  int entity_5 = 87;
  entity_5 = 94;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_2 = 'o';
  char* entity_6;
  memset(entity_7, 'K', entity_5-1);
  entity_7[entity_5-1]='';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  memcpy(entity_6, entity_7, entity_5*sizeof(char));
}