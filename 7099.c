void fun()
{
  int entity_5 = 53;
  entity_5 = 84;
  char entity_1[98] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[37-1]='';
  memset(entity_1, 'q', 98-1);
  entity_1[98-1]='';
  memset(entity_2, 'g', entity_5-1);
  entity_2[entity_5-1]='';
  memcpy(entity_7, entity_2, entity_5*sizeof(char));
}