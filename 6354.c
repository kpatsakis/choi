void fun()
{
  char* entity_9;
  char entity_6[26] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[54-1]='';
  memset(entity_6, 'D', 26-1);
  entity_6[26-1]='';
  memcpy(entity_9, entity_6, 26*sizeof(char));
}