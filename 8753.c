void fun()
{
  int entity_8 = 14;
  int entity_7 = 14;
  char* entity_5;
  char entity_0[17] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'd', 17-1);
  entity_0[17-1]='';
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memcpy(entity_5, entity_0, 17*sizeof(char));
}