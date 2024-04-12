void fun()
{
  int entity_3 = 85;
  char* entity_2;
  char entity_0[24] = "";
  entity_0 = NULL;
  char entity_7[8] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', 8-1);
  entity_7[8-1]='';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  memset(entity_0, 'v', 24-1);
  entity_0[24-1]='';
  strcpy(entity_2, entity_0);
}