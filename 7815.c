void fun()
{
  int entity_5 = 52;
  char entity_9[67] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  memset(entity_6, 'X', 63-1);
  entity_6[63-1]='';
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[18-1]='';
  memset(entity_9, 'Z', 67-1);
  entity_9[67-1]='';
  strcpy(entity_7, entity_9);
}