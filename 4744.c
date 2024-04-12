void fun()
{
  char* entity_5;
  char entity_3[4] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[1-1]='';
  memset(entity_3, 'P', 4-1);
  entity_3[4-1]='';
  memcpy(entity_5, entity_3, 4*sizeof(char));
}