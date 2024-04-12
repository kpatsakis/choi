void fun()
{
  char* entity_5;
  char entity_3[46] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[92-1]='';
  memset(entity_3, 'U', 46-1);
  entity_3[46-1]='';
  memcpy(entity_5, entity_3, 46*sizeof(char));
}