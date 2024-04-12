void fun()
{
  int entity_6 = 40;
  int entity_1 = 37;
  char* entity_5;
  char entity_0[73] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  memset(entity_0, 'h', 73-1);
  entity_0[73-1]='';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memset(entity_8, 'V', entity_6-1);
  entity_8[entity_6-1]='';
  entity_6 = 33;
  memcpy(entity_5, entity_8, entity_6*sizeof(char));
}