void fun()
{
  int entity_1 = 89;
  entity_1 = 71;
  char* entity_2;
  char entity_6[62] = "";
  entity_6 = NULL;
  char entity_9[19] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  memset(entity_6, 'g', 62-1);
  entity_6[62-1]='';
  memset(entity_9, 'N', 19-1);
  entity_9[19-1]='';
  entity_6[entity_1] = 'z';
}