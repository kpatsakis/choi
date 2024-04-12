void fun()
{
  int entity_2 = 87;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_5;
  char entity_6 = 'T';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[2-1]='';
  memset(entity_0, 'I', entity_2-1);
  entity_0[entity_2-1]='';
  strcpy(entity_1, entity_0);
}