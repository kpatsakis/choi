void fun()
{
  int entity_5 = 71;
  char entity_3[43] = "";
  entity_3 = NULL;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'O', entity_5-1);
  entity_6[entity_5-1]='';
  memset(entity_3, 'r', 43-1);
  entity_3[43-1]='';
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  memcpy(entity_9, entity_6, entity_5*sizeof(char));
}