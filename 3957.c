void fun()
{
  char entity_0[74] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'p', 74-1);
  entity_0[74-1]='';
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[64-1]='';
  memcpy(entity_3, entity_0, 74*sizeof(char));
}