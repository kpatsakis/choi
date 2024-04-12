void fun()
{
  int entity_0 = 87;
  char entity_3 = 'q';
  char entity_2[31] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'o', 31-1);
  entity_2[31-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  entity_0 = 53;
  strcpy(entity_5, entity_2);
}