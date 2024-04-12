void fun()
{
  int entity_3 = 52;
  char* entity_6;
  char* entity_1;
  char entity_8 = 'm';
  char entity_2[91] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_2, 'D', 91-1);
  entity_2[91-1]='';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[38-1]='';
  strcpy(entity_1, entity_2);
}