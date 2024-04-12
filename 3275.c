void fun()
{
  int entity_5 = 22;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_3;
  memset(entity_0, 'p', entity_5-1);
  entity_0[entity_5-1]='';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  entity_3 = (char*)malloc(0*sizeof(char));
  entity_3[0-1]='';
  entity_5 = 59;
  strcpy(entity_1, entity_0);
}