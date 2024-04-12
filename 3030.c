void fun()
{
  char entity_3[93] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'R', 93-1);
  entity_3[93-1]='';
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memcpy(entity_9, entity_3, 93*sizeof(char));
}