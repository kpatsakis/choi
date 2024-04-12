void fun()
{
  int entity_3 = 47;
  char* entity_2;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'x', entity_3-1);
  entity_4[entity_3-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  entity_4[37] = 'J';
}