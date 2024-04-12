void fun()
{
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 's', 97-1);
  entity_2[97-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  memcpy(entity_4, entity_2, 97*sizeof(char));
}