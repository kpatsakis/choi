void fun()
{
  int entity_1 = 30;
  char entity_2[81] = "";
  entity_2 = NULL;
  char* entity_8;
  char* entity_9;
  char entity_4 = 'W';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_2, 'Y', 81-1);
  entity_2[81-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memcpy(entity_8, entity_2, 81*sizeof(char));
}