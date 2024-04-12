void fun()
{
  int entity_8 = 37;
  char* entity_9;
  char entity_3[64] = "";
  entity_3 = NULL;
  char entity_5[22] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memset(entity_5, 'I', 22-1);
  entity_5[22-1]='';
  memset(entity_3, 'N', 64-1);
  entity_3[64-1]='';
  strcpy(entity_9, entity_3);
}