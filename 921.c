void fun()
{
  int entity_5 = 23;
  char entity_7[98] = "";
  entity_7 = NULL;
  char entity_2[43] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'R', 43-1);
  entity_2[43-1]='';
  memset(entity_7, 'K', 98-1);
  entity_7[98-1]='';
  entity_4 = (char*)malloc(89*sizeof(char));
  entity_4[89-1]='';
  entity_5 = 23;
  entity_2[entity_5] = 'u';
}