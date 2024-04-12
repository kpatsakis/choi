void fun()
{
  int entity_3 = 55;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char entity_0 = 'H';
  char* entity_1;
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[50-1]='';
  memset(entity_7, 'S', entity_3-1);
  entity_7[entity_3-1]='';
  entity_3 = 61;
  strcpy(entity_1, entity_7);
}