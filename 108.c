void fun()
{
  int entity_8 = 38;
  int entity_5 = 83;
  char entity_6[23] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_4;
  memset(entity_6, 'Q', 23-1);
  entity_6[23-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memcpy(entity_2, entity_6, 23*sizeof(char));
}