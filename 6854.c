void fun()
{
  char* entity_1;
  char entity_7[93] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  memset(entity_7, 'K', 93-1);
  entity_7[93-1]='';
  memcpy(entity_1, entity_7, 93*sizeof(char));
}