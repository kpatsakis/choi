void fun()
{
  char entity_6[100] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'X', 100-1);
  entity_6[100-1]='';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  memcpy(entity_7, entity_6, 100*sizeof(char));
}