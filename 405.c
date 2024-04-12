void fun()
{
  int entity_3 = 99;
  char* entity_8;
  char entity_6[75] = "";
  entity_6 = NULL;
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_4[22] = "";
  entity_4 = NULL;
  memset(entity_6, 'N', 75-1);
  entity_6[75-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_4, 'I', 22-1);
  entity_4[22-1]='';
  memset(entity_2, 'h', 87-1);
  entity_2[87-1]='';
  entity_3 = 66;
  memcpy(entity_8, entity_6, 75*sizeof(char));
}