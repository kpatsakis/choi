void fun()
{
  int entity_1 = 7;
  char entity_6[28] = "";
  entity_6 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[1-1]='';
  memset(entity_6, 'O', 28-1);
  entity_6[28-1]='';
  memset(entity_0, 'Y', entity_1-1);
  entity_0[entity_1-1]='';
  strcpy(entity_2, entity_0);
}