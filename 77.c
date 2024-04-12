void fun()
{
  int entity_8 = 81;
  char entity_9[95] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_0[21] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', 21-1);
  entity_0[21-1]='';
  memset(entity_9, 'C', 95-1);
  entity_9[95-1]='';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  entity_0[entity_8] = 'z';
}