void fun()
{
  int entity_2 = 31;
  entity_2 = 31;
  char entity_8[18] = "";
  entity_8 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_9[51] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  memset(entity_7, 'g', entity_2-1);
  entity_7[entity_2-1]='';
  memset(entity_8, 'A', 18-1);
  entity_8[18-1]='';
  memset(entity_9, 'v', 51-1);
  entity_9[51-1]='';
  strcpy(entity_3, entity_7);
}