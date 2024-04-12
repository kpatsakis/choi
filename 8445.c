void fun()
{
  int entity_7 = 50;
  char* entity_5;
  char entity_8[4] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char entity_0[38] = "";
  entity_0 = NULL;
  memset(entity_8, 'K', 4-1);
  entity_8[4-1]='';
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[18-1]='';
  memset(entity_0, 't', 38-1);
  entity_0[38-1]='';
  memset(entity_6, 'g', entity_7-1);
  entity_6[entity_7-1]='';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  entity_7 = 44;
  memcpy(entity_5, entity_6, entity_7*sizeof(char));
}