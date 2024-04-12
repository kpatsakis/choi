void fun()
{
  int entity_4 = 18;
  entity_4 = 17;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_8;
  char entity_2[98] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memset(entity_2, 'B', 98-1);
  entity_2[98-1]='';
  memset(entity_9, 'u', 34-1);
  entity_9[34-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_9);
}