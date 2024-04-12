void fun()
{
  char* entity_9;
  char entity_8[35] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  memset(entity_8, 't', 35-1);
  entity_8[35-1]='';
  memcpy(entity_3, entity_8, 35*sizeof(char));
}