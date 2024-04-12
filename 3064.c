void fun()
{
  int entity_6 = 37;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_7[75] = "";
  entity_7 = NULL;
  char entity_8 = 'v';
  char* entity_0;
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[12-1]='';
  memset(entity_5, 'w', entity_6-1);
  entity_5[entity_6-1]='';
  memset(entity_7, 'g', 75-1);
  entity_7[75-1]='';
  entity_6 = 23;
  strcpy(entity_0, entity_5);
}