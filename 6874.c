void fun()
{
  char* entity_2;
  char entity_3[39] = "";
  entity_3 = NULL;
  memset(entity_3, 'z', 39-1);
  entity_3[39-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  memcpy(entity_2, entity_3, 39*sizeof(char));
}