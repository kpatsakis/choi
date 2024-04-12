void fun()
{
  int entity_7 = 47;
  char* entity_6;
  char* entity_2;
  char entity_8[43] = "";
  entity_8 = NULL;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(10*sizeof(char));
  entity_6[10-1]='';
  entity_2 = (char*)malloc(87*sizeof(char));
  entity_2[87-1]='';
  memset(entity_0, 'g', entity_7-1);
  entity_0[entity_7-1]='';
  memset(entity_8, 'l', 43-1);
  entity_8[43-1]='';
  memcpy(entity_6, entity_0, entity_7*sizeof(char));
}