void fun()
{
  int entity_3 = 36;
  entity_3 = 9;
  char entity_8[54] = "";
  entity_8 = NULL;
  char entity_6[77] = "";
  entity_6 = NULL;
  char entity_1[66] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'P', 66-1);
  entity_1[66-1]='';
  memset(entity_8, 'M', 54-1);
  entity_8[54-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_6, 'g', 77-1);
  entity_6[77-1]='';
  memcpy(entity_4, entity_8, 54*sizeof(char));
}