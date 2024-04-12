void fun()
{
  int entity_8 = 57;
  char* entity_5;
  char entity_3[63] = "";
  entity_3 = NULL;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'g', entity_8-1);
  entity_0[entity_8-1]='';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_3, 'Z', 63-1);
  entity_3[63-1]='';
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[87-1]='';
  memcpy(entity_5, entity_0, entity_8*sizeof(char));
}