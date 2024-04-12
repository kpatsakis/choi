void fun()
{
  char entity_5[78] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_0;
  memset(entity_5, 'x', 78-1);
  entity_5[78-1]='';
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  strcpy(entity_2, entity_5);
}