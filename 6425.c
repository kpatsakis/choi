void fun()
{
  char* entity_0;
  char entity_1[23] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  memset(entity_1, 'O', 23-1);
  entity_1[23-1]='';
  entity_1[6] = 'N';
}