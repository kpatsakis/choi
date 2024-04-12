void fun()
{
  int entity_1 = 100;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_8[48] = "";
  entity_8 = NULL;
  char entity_4[50] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_9 = 'r';
  memset(entity_6, 'D', entity_1-1);
  entity_6[entity_1-1]='';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[57-1]='';
  memset(entity_8, 'G', 48-1);
  entity_8[48-1]='';
  memset(entity_4, 's', 50-1);
  entity_4[50-1]='';
  strcpy(entity_7, entity_6);
}