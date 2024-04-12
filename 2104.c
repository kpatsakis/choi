void fun()
{
  int entity_2 = 99;
  char* entity_4;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  memset(entity_0, 'D', entity_2-1);
  entity_0[entity_2-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  strcpy(entity_1, entity_0);
}