void fun()
{
  char* entity_3;
  char entity_9[97] = "";
  entity_9 = NULL;
  memset(entity_9, 'q', 97-1);
  entity_9[97-1]='';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  memcpy(entity_3, entity_9, 97*sizeof(char));
}