void fun()
{
  char entity_0[10] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(4*sizeof(char));
  entity_3[4-1]='';
  memset(entity_0, 'z', 10-1);
  entity_0[10-1]='';
  memcpy(entity_3, entity_0, 10*sizeof(char));
}