void fun()
{
  int entity_3 = 34;
  char* entity_5;
  char entity_7[69] = "";
  entity_7 = NULL;
  char entity_0[11] = "";
  entity_0 = NULL;
  char entity_6 = 'S';
  memset(entity_0, 'T', 11-1);
  entity_0[11-1]='';
  memset(entity_7, 'i', 69-1);
  entity_7[69-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  strcpy(entity_5, entity_7);
}