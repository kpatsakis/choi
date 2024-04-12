void fun()
{
  int entity_8 = 32;
  entity_8 = 99;
  char entity_2[86] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'd', 86-1);
  entity_2[86-1]='';
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  entity_2[entity_8] = 't';
}