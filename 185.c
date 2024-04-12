void fun()
{
  char entity_6[26] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[43-1]='';
  memset(entity_6, 'T', 26-1);
  entity_6[26-1]='';
  memcpy(entity_9, entity_6, 26*sizeof(char));
}