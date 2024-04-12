void fun()
{
  int entity_8 = 66;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_0[48] = "";
  entity_0 = NULL;
  memset(entity_0, 's', 48-1);
  entity_0[48-1]='';
  memset(entity_2, 'O', entity_8-1);
  entity_2[entity_8-1]='';
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[6-1]='';
  entity_8 = 39;
  strcpy(entity_7, entity_2);
}