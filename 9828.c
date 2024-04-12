void fun()
{
  int entity_1 = 22;
  char* entity_0;
  char entity_6 = 'e';
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memset(entity_7, 'q', entity_1-1);
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[65-1]='';
  strcpy(entity_5, entity_7);
}