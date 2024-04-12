void fun()
{
  int entity_8 = 40;
  char entity_0 = 'e';
  char entity_6 = 'K';
  char* entity_3;
  char entity_5[87] = "";
  entity_5 = NULL;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  memset(entity_5, 'L', 87-1);
  entity_5[87-1]='';
  memset(entity_7, 'Q', entity_8-1);
  entity_7[entity_8-1]='';
  entity_8 = 33;
  memcpy(entity_3, entity_7, entity_8*sizeof(char));
}