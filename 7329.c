void fun()
{
  char* entity_4;
  char entity_0[56] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  memset(entity_0, 'w', 56-1);
  entity_0[56-1]='';
  memcpy(entity_4, entity_0, 56*sizeof(char));
}