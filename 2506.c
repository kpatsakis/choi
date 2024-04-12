void fun()
{
  char* entity_2;
  char entity_9[48] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 48-1);
  entity_9[48-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  memcpy(entity_2, entity_9, 48*sizeof(char));
}