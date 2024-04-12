void fun()
{
  int entity_4 = 17;
  int entity_0 = 57;
  int entity_1 = 59;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'U', entity_1-1);
  entity_2[entity_1-1]='';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  entity_1 = 63;
  strcpy(entity_3, entity_2);
}