void fun()
{
  int entity_8 = 35;
  entity_8 = 60;
  char entity_1[72] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_7[32] = "";
  entity_7 = NULL;
  char entity_4 = 'V';
  memset(entity_1, 'u', 72-1);
  entity_1[72-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  memset(entity_7, 'U', 32-1);
  entity_7[32-1]='';
  entity_1[entity_8] = 'K';
}