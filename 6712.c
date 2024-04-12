void fun()
{
  int entity_6 = 90;
  int entity_2 = 41;
  char entity_8[95] = "";
  entity_8 = NULL;
  char* entity_0;
  char* entity_4;
  char entity_5 = 'n';
  memset(entity_8, 'G', 95-1);
  entity_8[95-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  strcpy(entity_0, entity_8);
}