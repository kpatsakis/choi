void fun()
{
  char entity_9 = 'n';
  char* entity_5;
  char entity_7[64] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', 64-1);
  entity_7[64-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  memcpy(entity_5, entity_7, 64*sizeof(char));
}