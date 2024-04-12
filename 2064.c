void fun()
{
  char entity_7[19] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  memset(entity_7, 'N', 19-1);
  entity_7[19-1]='';
  memcpy(entity_0, entity_7, 19*sizeof(char));
}