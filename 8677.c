void fun()
{
  int entity_0 = 51;
  entity_0 = 5;
  char* entity_9;
  char entity_6[10] = "";
  entity_6 = NULL;
  char entity_5[95] = "";
  entity_5 = NULL;
  memset(entity_5, 'm', 95-1);
  entity_5[95-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memset(entity_6, 'v', 10-1);
  entity_6[10-1]='';
  entity_5[entity_0] = 'k';
}