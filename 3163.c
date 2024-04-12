void fun()
{
  char entity_9[3] = "";
  entity_9 = NULL;
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'R', 97-1);
  entity_2[97-1]='';
  memset(entity_9, 'j', 3-1);
  entity_9[3-1]='';
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  memcpy(entity_4, entity_9, 3*sizeof(char));
}