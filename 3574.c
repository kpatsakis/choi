void fun()
{
  int entity_8 = 83;
  entity_8 = 63;
  char* entity_9;
  char entity_6 = 'B';
  char* entity_3;
  char* entity_2;
  char entity_0[19] = "";
  entity_0 = NULL;
  memset(entity_0, 'j', 19-1);
  entity_0[19-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[15-1]='';
  strcpy(entity_3, entity_0);
}