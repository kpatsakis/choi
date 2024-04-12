void fun()
{
  char* entity_2;
  char entity_7[83] = "";
  entity_7 = NULL;
  char entity_0[64] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  memset(entity_0, 'E', 64-1);
  entity_0[64-1]='';
  memset(entity_7, 'R', 83-1);
  entity_7[83-1]='';
  memcpy(entity_2, entity_0, 64*sizeof(char));
}