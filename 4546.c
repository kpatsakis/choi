void fun()
{
  int entity_7 = 16;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_1[76] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_2, 'X', entity_7-1);
  entity_2[entity_7-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memset(entity_1, 'N', 76-1);
  entity_1[76-1]='';
  entity_7 = 44;
  strcpy(entity_0, entity_2);
}