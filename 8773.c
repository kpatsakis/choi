void fun()
{
  int entity_1 = 26;
  char* entity_0;
  char* entity_9;
  char entity_8[82] = "";
  entity_8 = NULL;
  char entity_6[72] = "";
  entity_6 = NULL;
  char entity_3[13] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', 13-1);
  entity_3[13-1]='';
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memset(entity_6, 'd', 72-1);
  entity_6[72-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_8, 'W', 82-1);
  entity_8[82-1]='';
  entity_1 = 9;
  memcpy(entity_9, entity_3, 13*sizeof(char));
}