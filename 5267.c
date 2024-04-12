void fun()
{
  int entity_6 = 10;
  int entity_8 = 19;
  int entity_9 = 86;
  char* entity_0;
  char entity_5[74] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  memset(entity_5, 'C', 74-1);
  entity_5[74-1]='';
  strcpy(entity_4, entity_5);
}