void fun()
{
  int entity_2 = 79;
  char entity_8[88] = "";
  entity_8 = NULL;
  char* entity_6;
  char* entity_1;
  memset(entity_8, 'G', 88-1);
  entity_8[88-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[38-1]='';
  strcpy(entity_6, entity_8);
}