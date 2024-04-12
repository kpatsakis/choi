void fun()
{
  char* entity_7;
  char entity_3[54] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[39-1]='';
  memset(entity_3, 'f', 54-1);
  entity_3[54-1]='';
  memcpy(entity_7, entity_3, 54*sizeof(char));
}