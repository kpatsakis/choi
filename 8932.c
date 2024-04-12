void fun()
{
  char entity_6[3] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 't', 3-1);
  entity_6[3-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memcpy(entity_7, entity_6, 3*sizeof(char));
}