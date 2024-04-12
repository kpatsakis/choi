void fun()
{
  int entity_0 = 5;
  entity_0 = 87;
  char entity_2[85] = "";
  entity_2 = NULL;
  char entity_5[50] = "";
  entity_5 = NULL;
  char entity_3 = 'n';
  char* entity_1;
  memset(entity_5, 'Q', 50-1);
  entity_5[50-1]='';
  memset(entity_2, 'w', 85-1);
  entity_2[85-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  strcpy(entity_1, entity_5);
}