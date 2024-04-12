void fun()
{
  int entity_5 = 79;
  char entity_6[40] = "";
  entity_6 = NULL;
  char* entity_3;
  char* entity_0;
  char* entity_4;
  memset(entity_6, 'W', 40-1);
  entity_6[40-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  strcpy(entity_3, entity_6);
}