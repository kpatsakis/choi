void fun()
{
  int entity_6 = 89;
  entity_6 = 89;
  char entity_4 = 'w';
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_8;
  char* entity_7;
  char entity_3 = 'm';
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[57-1]='';
  memset(entity_0, 'D', entity_6-1);
  entity_0[entity_6-1]='';
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  strcpy(entity_7, entity_0);
}