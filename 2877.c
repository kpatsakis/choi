void fun()
{
  int entity_2 = 75;
  entity_2 = 10;
  char entity_8[95] = "";
  entity_8 = NULL;
  char* entity_0;
  char* entity_5;
  memset(entity_8, 'd', 95-1);
  entity_8[95-1]='';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[96-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  strcpy(entity_0, entity_8);
}