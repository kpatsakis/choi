void fun()
{
  int entity_5 = 81;
  char* entity_6;
  char entity_2[58] = "";
  entity_2 = NULL;
  char entity_0[37] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_2, 'O', 58-1);
  entity_2[58-1]='';
  memset(entity_0, 's', 37-1);
  entity_0[37-1]='';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memcpy(entity_6, entity_0, 37*sizeof(char));
}