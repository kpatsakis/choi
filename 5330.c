void fun()
{
  int entity_2 = 93;
  char entity_5 = 's';
  char entity_8[77] = "";
  entity_8 = NULL;
  char entity_4 = 'b';
  char* entity_6;
  char entity_3[62] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_8, 'z', 77-1);
  entity_8[77-1]='';
  memset(entity_3, 'N', 62-1);
  entity_3[62-1]='';
  entity_2 = 2;
  memcpy(entity_6, entity_8, 77*sizeof(char));
}