void fun()
{
  char* entity_5;
  char entity_3[49] = "";
  entity_3 = NULL;
  char entity_2[51] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  memset(entity_2, 'b', 51-1);
  entity_2[51-1]='';
  memset(entity_3, 't', 49-1);
  entity_3[49-1]='';
  memcpy(entity_5, entity_2, 51*sizeof(char));
}