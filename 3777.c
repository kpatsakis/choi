void fun()
{
  int entity_4 = 15;
  char* entity_9;
  char entity_8[94] = "";
  entity_8 = NULL;
  char entity_2[6] = "";
  entity_2 = NULL;
  memset(entity_8, 'v', 94-1);
  entity_8[94-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_2, 'F', 6-1);
  entity_2[6-1]='';
  strcpy(entity_9, entity_8);
}