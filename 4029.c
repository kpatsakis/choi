void fun()
{
  int entity_3 = 75;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'Y', entity_3-1);
  entity_7[entity_3-1]='';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[2-1]='';
  strcpy(entity_1, entity_7);
}