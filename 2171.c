void fun()
{
  int entity_1 = 89;
  char entity_3 = 'c';
  char* entity_5;
  char entity_0[15] = "";
  entity_0 = NULL;
  memset(entity_0, 'o', 15-1);
  entity_0[15-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  entity_1 = 25;
  strcpy(entity_5, entity_0);
}