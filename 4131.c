void fun()
{
  int entity_1 = 16;
  int entity_7 = 47;
  entity_7 = 60;
  char* entity_8;
  char entity_0[15] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_5[87] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[11-1]='';
  memset(entity_0, 'h', 15-1);
  entity_0[15-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_5, 'J', 87-1);
  entity_5[87-1]='';
  memcpy(entity_2, entity_0, 15*sizeof(char));
}