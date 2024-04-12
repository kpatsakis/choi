void fun()
{
  int entity_3 = 24;
  char entity_2[88] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_5[93] = "";
  entity_5 = NULL;
  char entity_8 = 'C';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_5, 'F', 93-1);
  entity_5[93-1]='';
  memset(entity_2, 'G', 88-1);
  entity_2[88-1]='';
  entity_3 = 20;
  strcpy(entity_9, entity_2);
}