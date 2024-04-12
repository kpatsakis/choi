void fun()
{
  int entity_4 = 12;
  entity_4 = 56;
  char* entity_3;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'h', entity_4-1);
  entity_0[entity_4-1]='';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  memcpy(entity_3, entity_0, entity_4*sizeof(char));
}