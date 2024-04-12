void fun()
{
  int entity_6 = 98;
  int entity_8 = 75;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  memset(entity_2, 'R', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[10] = 'S';
}