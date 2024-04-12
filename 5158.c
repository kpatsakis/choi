void fun()
{
  int entity_0 = 84;
  char* entity_9;
  char entity_1 = 'T';
  char* entity_5;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char entity_7 = 'C';
  memset(entity_8, 'T', entity_0-1);
  entity_8[entity_0-1]='';
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[35-1]='';
  entity_5 = (char*)malloc(10*sizeof(char));
  entity_5[10-1]='';
  strcpy(entity_9, entity_8);
}