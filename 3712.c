void fun()
{
  char entity_9[63] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_6[55] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memset(entity_6, 'N', 55-1);
  entity_6[55-1]='';
  memset(entity_9, 'K', 63-1);
  entity_9[63-1]='';
  entity_6[6] = 'a';
}