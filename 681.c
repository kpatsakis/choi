void fun()
{
  int entity_8 = 16;
  char* entity_4;
  char* entity_2;
  char entity_5[48] = "";
  entity_5 = NULL;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[80-1]='';
  memset(entity_6, 'L', 63-1);
  entity_6[63-1]='';
  memset(entity_5, 't', 48-1);
  entity_5[48-1]='';
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  entity_8 = 26;
  memcpy(entity_2, entity_5, 48*sizeof(char));
}