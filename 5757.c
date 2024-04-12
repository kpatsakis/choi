void fun()
{
  char entity_6[16] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[47-1]='';
  memset(entity_6, 'T', 16-1);
  entity_6[16-1]='';
  memcpy(entity_7, entity_6, 16*sizeof(char));
}