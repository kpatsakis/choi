void fun()
{
  char* entity_0;
  char entity_8[36] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 36-1);
  entity_8[36-1]='';
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  memcpy(entity_0, entity_8, 36*sizeof(char));
}