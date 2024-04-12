void fun()
{
  int entity_3 = 28;
  entity_3 = 28;
  char* entity_6;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'C', entity_3-1);
  entity_1[entity_3-1]='';
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  strcpy(entity_6, entity_1);
}