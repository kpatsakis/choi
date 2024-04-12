void fun()
{
  int entity_0 = 96;
  char* entity_2;
  char entity_9 = 'P';
  char entity_5[98] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'T', 98-1);
  entity_5[98-1]='';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_5);
}