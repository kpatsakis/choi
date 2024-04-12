void fun()
{
  int entity_4 = 63;
  int entity_1 = 7;
  char* entity_5;
  char entity_2[94] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 94-1);
  entity_2[94-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_4 = 41;
  strcpy(entity_5, entity_2);
}