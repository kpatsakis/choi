void fun()
{
  int entity_8 = 32;
  int entity_5 = 100;
  char entity_7[65] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_6[4] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_7, 'r', 65-1);
  entity_7[65-1]='';
  memset(entity_6, 'T', 4-1);
  entity_6[4-1]='';
  entity_5 = 37;
  memcpy(entity_4, entity_7, 65*sizeof(char));
}