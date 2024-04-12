void fun()
{
  int entity_1 = 57;
  entity_1 = 57;
  char* entity_8;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[98-1]='';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[77-1]='';
  memset(entity_0, 'j', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_8, entity_0);
}