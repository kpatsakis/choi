void fun()
{
  int entity_6 = 57;
  entity_6 = 57;
  char* entity_2;
  char entity_5 = 'f';
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[75-1]='';
  memset(entity_0, 'c', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_2, entity_0);
}