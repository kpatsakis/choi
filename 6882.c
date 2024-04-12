void fun()
{
  char* entity_0;
  char entity_7[73] = "";
  entity_7 = NULL;
  char entity_5 = 'F';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[80-1]='';
  memset(entity_7, 'E', 73-1);
  entity_7[73-1]='';
  memcpy(entity_0, entity_7, 73*sizeof(char));
}