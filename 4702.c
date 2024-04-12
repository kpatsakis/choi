void fun()
{
  char entity_6[93] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_7 = 's';
  memset(entity_6, 'X', 93-1);
  entity_6[93-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memcpy(entity_9, entity_6, 93*sizeof(char));
}