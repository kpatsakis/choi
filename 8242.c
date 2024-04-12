void fun()
{
  char entity_8[93] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(31*sizeof(char));
  entity_2[31-1]='';
  memset(entity_8, 'x', 93-1);
  entity_8[93-1]='';
  memcpy(entity_2, entity_8, 93*sizeof(char));
}