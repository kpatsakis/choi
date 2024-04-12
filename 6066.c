void fun()
{
  int entity_8 = 87;
  char entity_2[65] = "";
  entity_2 = NULL;
  char* entity_3;
  char* entity_0;
  char entity_6[42] = "";
  entity_6 = NULL;
  memset(entity_6, 'e', 42-1);
  entity_6[42-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  memset(entity_2, 'o', 65-1);
  entity_2[65-1]='';
  strcpy(entity_3, entity_6);
}