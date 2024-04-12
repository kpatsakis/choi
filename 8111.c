void fun()
{
  int entity_8 = 58;
  char* entity_2;
  char entity_6[26] = "";
  entity_6 = NULL;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_1, 'z', entity_8-1);
  entity_1[entity_8-1]='';
  memset(entity_6, 'X', 26-1);
  entity_6[26-1]='';
  strcpy(entity_2, entity_1);
}