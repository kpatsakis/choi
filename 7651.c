void fun()
{
  int entity_8 = 92;
  int entity_0 = 56;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char entity_5[11] = "";
  entity_5 = NULL;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_7, 'r', 96-1);
  entity_7[96-1]='';
  memset(entity_2, 'C', entity_0-1);
  entity_2[entity_0-1]='';
  memset(entity_5, 'J', 11-1);
  entity_5[11-1]='';
  entity_0 = 74;
  memcpy(entity_4, entity_2, entity_0*sizeof(char));
}