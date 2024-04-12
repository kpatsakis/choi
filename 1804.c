void fun()
{
  int entity_4 = 33;
  int entity_0 = 28;
  char* entity_3;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_7 = 'A';
  char* entity_1;
  memset(entity_5, 'F', entity_4-1);
  entity_5[entity_4-1]='';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[77-1]='';
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[85-1]='';
  strcpy(entity_3, entity_5);
}