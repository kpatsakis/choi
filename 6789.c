void fun()
{
  int entity_6 = 44;
  entity_6 = 44;
  char* entity_5;
  char entity_4[80] = "";
  entity_4 = NULL;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_4, 'c', 80-1);
  entity_4[80-1]='';
  memset(entity_0, 'I', entity_6-1);
  entity_0[entity_6-1]='';
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[34-1]='';
  strcpy(entity_5, entity_0);
}