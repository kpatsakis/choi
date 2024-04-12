void fun()
{
  char* entity_0;
  char entity_1[31] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[29-1]='';
  memset(entity_1, 'h', 31-1);
  entity_1[31-1]='';
  memcpy(entity_0, entity_1, 31*sizeof(char));
}