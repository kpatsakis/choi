void fun()
{
  char entity_7[60] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'I', 60-1);
  entity_7[60-1]='';
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[93-1]='';
  memcpy(entity_2, entity_7, 60*sizeof(char));
}