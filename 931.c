void fun()
{
  int entity_6 = 91;
  char* entity_3;
  char entity_0[96] = "";
  entity_0 = NULL;
  char entity_2 = 'v';
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[64-1]='';
  memset(entity_0, 'T', 96-1);
  entity_0[96-1]='';
  memcpy(entity_3, entity_0, 96*sizeof(char));
}