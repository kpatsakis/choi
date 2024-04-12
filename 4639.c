void fun()
{
  char entity_4[60] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'z', 60-1);
  entity_4[60-1]='';
  entity_3 = (char*)malloc(12*sizeof(char));
  entity_3[12-1]='';
  memcpy(entity_3, entity_4, 60*sizeof(char));
}