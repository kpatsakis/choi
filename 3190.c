void fun()
{
  char entity_0[92] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'b', 92-1);
  entity_0[92-1]='';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  strcpy(entity_8, entity_0);
}