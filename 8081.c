void fun()
{
  char entity_1[97] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  memset(entity_1, 'R', 97-1);
  entity_1[97-1]='';
  memcpy(entity_6, entity_1, 97*sizeof(char));
}