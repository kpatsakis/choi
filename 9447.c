void fun()
{
  int entity_7 = 56;
  int entity_0 = 82;
  char entity_6[1] = "";
  entity_6 = NULL;
  char entity_2[46] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  memset(entity_2, 'h', 46-1);
  entity_2[46-1]='';
  memset(entity_6, 'T', 1-1);
  entity_6[1-1]='';
  strcpy(entity_9, entity_6);
}