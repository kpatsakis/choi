void fun()
{
  char* entity_3;
  char entity_0[4] = "";
  entity_0 = NULL;
  memset(entity_0, 'N', 4-1);
  entity_0[4-1]='';
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[54-1]='';
  memcpy(entity_3, entity_0, 4*sizeof(char));
}