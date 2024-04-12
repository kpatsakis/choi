void fun()
{
  int entity_0 = 83;
  entity_0 = 26;
  char* entity_6;
  char entity_8[84] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_8, 'G', 84-1);
  entity_8[84-1]='';
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  strcpy(entity_6, entity_8);
}