void fun()
{
  int entity_6 = 25;
  char entity_2[48] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_1 = 'm';
  char entity_8[3] = "";
  entity_8 = NULL;
  memset(entity_2, 'P', 48-1);
  entity_2[48-1]='';
  memset(entity_8, 'T', 3-1);
  entity_8[3-1]='';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  entity_6 = 45;
  entity_8[entity_6] = 'I';
}