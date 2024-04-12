void fun()
{
  int entity_8 = 98;
  char entity_1 = 'e';
  char* entity_3;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_4[40] = "";
  entity_4 = NULL;
  memset(entity_6, 'U', entity_8-1);
  entity_6[entity_8-1]='';
  memset(entity_4, 'n', 40-1);
  entity_4[40-1]='';
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  memcpy(entity_3, entity_6, entity_8*sizeof(char));
}