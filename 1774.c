void fun()
{
  int entity_4 = 80;
  int entity_8 = 80;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_2[21] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  memset(entity_6, 'F', entity_4-1);
  entity_6[entity_4-1]='';
  memset(entity_2, 'X', 21-1);
  entity_2[21-1]='';
  entity_4 = 46;
  strcpy(entity_1, entity_6);
}