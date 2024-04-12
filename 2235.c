void fun()
{
  int entity_0 = 22;
  int entity_3 = 26;
  int entity_5 = 98;
  entity_5 = 88;
  char entity_4[16] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_6[70] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memset(entity_4, 'E', 16-1);
  entity_4[16-1]='';
  memset(entity_6, 'N', 70-1);
  entity_6[70-1]='';
  strcpy(entity_9, entity_4);
}