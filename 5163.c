void fun()
{
  int entity_5 = 17;
  char entity_6[96] = "";
  entity_6 = NULL;
  char entity_7[3] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'U', 3-1);
  entity_7[3-1]='';
  memset(entity_6, 'u', 96-1);
  entity_6[96-1]='';
  entity_3 = (char*)malloc(91*sizeof(char));
  entity_3[91-1]='';
  entity_5 = 60;
  entity_6[entity_5] = 'u';
}