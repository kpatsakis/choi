void fun()
{
  char* entity_2;
  char entity_4[97] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  memset(entity_4, 'q', 97-1);
  entity_4[97-1]='';
  memcpy(entity_2, entity_4, 97*sizeof(char));
}