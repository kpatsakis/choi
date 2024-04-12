void fun()
{
  char entity_1[30] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'X', 30-1);
  entity_1[30-1]='';
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  memcpy(entity_8, entity_1, 30*sizeof(char));
}