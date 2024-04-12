void fun()
{
  int entity_3 = 68;
  entity_3 = 68;
  char* entity_5;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'g', entity_3-1);
  entity_1[entity_3-1]='';
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  strcpy(entity_5, entity_1);
}