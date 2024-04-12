void fun()
{
  int entity_5 = 19;
  int entity_9 = 22;
  char* entity_1;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[35-1]='';
  memset(entity_3, 'N', entity_5-1);
  entity_3[entity_5-1]='';
  entity_5 = 54;
  strcpy(entity_1, entity_3);
}