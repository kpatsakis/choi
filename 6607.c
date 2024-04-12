void fun()
{
  char* entity_0;
  char entity_7 = 'i';
  char entity_6[2] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  memset(entity_6, 'e', 2-1);
  entity_6[2-1]='';
  memcpy(entity_0, entity_6, 2*sizeof(char));
}