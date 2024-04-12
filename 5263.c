void fun()
{
  int entity_7 = 90;
  int entity_8 = 60;
  char entity_0[13] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_4[41] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_4, 'Q', 41-1);
  entity_4[41-1]='';
  memset(entity_0, 'd', 13-1);
  entity_0[13-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  memcpy(entity_6, entity_4, 41*sizeof(char));
}